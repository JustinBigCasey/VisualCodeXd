#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <stdbool.h>
#include <stdatomic.h>

// Biến chia sẻ số dư tài khoản
int balance = 1000;

// Cờ khóa dùng cho Spinlock (0: rảnh, 1: bận)
atomic_int lock_flag = 0;

// Hàm vào miền găng có rào cản bộ nhớ
void acquire_lock()
{
    while (atomic_exchange_explicit(&lock_flag, 1, memory_order_relaxed))
    {
        // Chờ đến khi cờ được nhả
    }
    // MEMORY BARRIER: Ngăn không cho bất kỳ thao tác đọc/ghi 'balance' nào
    // bị CPU/Compiler đẩy lên thực thi trước thời điểm chiếm được khóa
    atomic_thread_fence(memory_order_acquire);
}

// Hàm rời miền găng có rào cản bộ nhớ
void release_lock()
{
    // MEMORY BARRIER: Đảm bảo mọi thay đổi trên 'balance' đã được ghi xong
    // xuống bộ nhớ trước khi giải phóng khóa
    atomic_thread_fence(memory_order_release);
    atomic_store_explicit(&lock_flag, 0, memory_order_relaxed);
}

// Luồng người chồng (Rút tiền)
void *withdraw(void *arg)
{
    int amount = 200;

    acquire_lock(); // --- Vào miền găng ---

    int current = balance;
    usleep(10000); // 10ms - Giả lập độ trễ xử lý
    balance = current - amount;
    printf("[Chong] Rut %d$, so du ghi nhan: %d$\n", amount, balance);

    release_lock(); // --- Rời miền găng ---

    return NULL;
}

// Luồng người vợ (Gửi tiền)
void *deposit(void *arg)
{
    int amount = 500;

    acquire_lock(); // --- Vào miền găng ---

    int current = balance;
    usleep(10000); // 10ms - Giả lập độ trễ xử lý
    balance = current + amount;
    printf("[Vo]   Gui %d$, so du ghi nhan: %d$\n", amount, balance);

    release_lock(); // --- Rời miền găng ---

    return NULL;
}

int main()
{
    pthread_t thread_husband, thread_wife;

    printf("=== HE THONG NGAN HANG DONG BO DUNG MEMORY BARRIER (C) ===\n");
    printf("So du ban dau: %d$\n\n", balance);

    pthread_create(&thread_husband, NULL, withdraw, NULL);
    pthread_create(&thread_wife, NULL, deposit, NULL);

    pthread_join(thread_husband, NULL);
    pthread_join(thread_wife, NULL);

    printf("\n===> So du cuoi cung (Chinh xac): %d$\n", balance);

    return 0;
}
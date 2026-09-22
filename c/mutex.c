#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

// Tài nguyên chia sẻ
int balance = 1000;

// Khởi tạo khóa Mutex
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

// Hàm rút tiền của chồng
void *withdraw(void *arg)
{
    int amount = 200;

    // Yêu cầu khóa Mutex trước khi vào vùng tranh chấp
    pthread_mutex_lock(&mutex);

    int current = balance;
    usleep(10000); // 10ms - Giả lập độ trễ xử lý
    balance = current - amount;
    printf("[Chong] Rut %d$, so du ghi nhan: %d$\n", amount, balance);

    // Mở khóa Mutex sau khi thao tác xong
    pthread_mutex_unlock(&mutex);

    return NULL;
}

// Hàm gửi tiền của vợ
void *deposit(void *arg)
{
    int amount = 500;

    // Yêu cầu khóa Mutex trước khi vào vùng tranh chấp
    pthread_mutex_lock(&mutex);

    int current = balance;
    usleep(10000); // 10ms - Giả lập độ trễ xử lý
    balance = current + amount;
    printf("[Vo]   Gui %d$, so du ghi nhan: %d$\n", amount, balance);

    // Mở khóa Mutex sau khi thao tác xong
    pthread_mutex_unlock(&mutex);

    return NULL;
}

int main()
{
    pthread_t thread_husband, thread_wife;

    printf("=== HE THONG NGAN HANG DUNG KHOA MUTEX (C) ===\n");
    printf("So du ban dau: %d$\n\n", balance);

    // Tạo 2 luồng POSIX
    pthread_create(&thread_husband, NULL, withdraw, NULL);
    pthread_create(&thread_wife, NULL, deposit, NULL);

    // Chờ cả 2 luồng kết thúc
    pthread_join(thread_husband, NULL);
    pthread_join(thread_wife, NULL);

    // Hủy khóa Mutex khi kết thúc chương trình
    pthread_mutex_destroy(&mutex);

    printf("\n===> So du cuoi cung (Chinh xac): %d$\n", balance);

    return 0;
}
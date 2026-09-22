#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <stdbool.h>

// Biến chia sẻ số dư tài khoản
int balance = 1000;

// Các biến phục vụ giải thuật Peterson (0: Chồng, 1: Vợ)
// Dùng từ khóa volatile để trình biên dịch không tối ưu hóa ghi đè biến trong vòng lặp chờ
volatile bool flag[2] = {false, false};
volatile int turn = 0;

// Hàm vào miền găng (Entry Section)
void peterson_lock(int process_id)
{
    int other = 1 - process_id;
    flag[process_id] = true; // Báo hiệu muốn vào miền găng
    turn = other;            // Nhường quyền ưu tiên cho tiến trình kia

    // Chờ bận (busy waiting)
    while (flag[other] && turn == other)
        ;
}

// Hàm rời miền găng (Exit Section)
void peterson_unlock(int process_id)
{
    flag[process_id] = false; // Báo hiệu đã ra khỏi miền găng
}

// Hàm rút tiền của người chồng (Tiến trình ID = 0)
void *withdraw(void *arg)
{
    int amount = 200;

    peterson_lock(0); // --- Bắt đầu miền găng ---

    int current = balance;
    usleep(10000); // 10ms - Giả lập độ trễ xử lý gây Race Condition nếu không khóa
    balance = current - amount;
    printf("[Chong] Rut %d$, so du ghi nhan: %d$\n", amount, balance);

    peterson_unlock(0); // --- Kết thúc miền găng ---

    return NULL;
}

// Hàm gửi tiền của người vợ (Tiến trình ID = 1)
void *deposit(void *arg)
{
    int amount = 500;

    peterson_lock(1); // --- Bắt đầu miền găng ---

    int current = balance;
    usleep(10000); // 10ms - Giả lập độ trễ xử lý gây Race Condition nếu không khóa
    balance = current + amount;
    printf("[Vo]   Gui %d$, so du ghi nhan: %d$\n", amount, balance);

    peterson_unlock(1); // --- Kết thúc miền găng ---

    return NULL;
}

int main()
{
    pthread_t thread_husband, thread_wife;

    printf("=== HE THONG NGAN HANG DONG BO PETERSON (C) ===\n");
    printf("So du ban dau: %d$\n\n", balance);

    // Khởi tạo 2 luồng POSIX (chạy đồng thời)
    pthread_create(&thread_husband, NULL, withdraw, NULL);
    pthread_create(&thread_wife, NULL, deposit, NULL);

    // Chờ 2 luồng kết thúc
    pthread_join(thread_husband, NULL);
    pthread_join(thread_wife, NULL);

    printf("\n===> So du cuoi cung (Chinh xac): %d$\n", balance);

    return 0;
}
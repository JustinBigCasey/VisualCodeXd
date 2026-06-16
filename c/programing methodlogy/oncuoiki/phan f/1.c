#include <stdio.h>
#include <string.h>

int demSoTuBangStrtok(char s[])
{
    int count = 0;

    // Tạo một bản sao vì strtok sẽ làm thay đổi chuỗi gốc
    char s_copy[100];
    strcpy(s_copy, s);

    // Tách từ đầu tiên dựa trên khoảng trắng, tab (\t), hoặc xuống dòng (\n)
    char *token = strtok(s_copy, " \t\n");

    // Tiếp tục tách các từ còn lại cho đến khi hết chuỗi
    while (token != NULL)
    {
        count++;
        token = strtok(NULL, " \t\n");
    }

    return count;
}

int main()
{
    char s[] = "Lap trinh C g 3";
    printf("So tu trong chuoi la: %d\n", demSoTuBangStrtok(s));

    return 0;
}
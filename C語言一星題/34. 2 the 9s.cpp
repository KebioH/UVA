#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int degree(char* num, int size, int count) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += num[i] - '0';
    }

    char temp[1010]; //不知道哪裡錯就檢查陣列大小
    int digit = sum, index = 0;
    while (digit != 0) {
        temp[index++] = digit % 10 + '0';
        digit /= 10;
    }

    if (sum % 9 == 0 && sum > 9) {
        return degree(temp, index, count + 1); //還沒到達單一位數 需要進行計算
    } else if (sum == 9) { //不同情況都要額外判斷
        if (count == 0) {
            return 1;
        }
        else {
            return count + 1;
        }
    } else {
        return 0; //原始數字不是9的倍數
    }
}

int main()
{
    char num[1010]; //不知道哪裡錯就檢查陣列大小
    
    while (fgets(num, sizeof(num), stdin)) {
        if (num[0] == '0') break;
        num[strcspn(num, "\n")] = '\0';

        int len = strlen(num);
        int count = degree(num, len, 0);
        if (count) {
            for (int i = 0; i < len; i++) {
                printf("%c", num[i]); //格式不能錯誤 
            }
            printf(" is a multiple of 9 and has 9-degree %d.", count);
        }
        else {
            for (int i = 0; i < len; i++) {
                printf("%c", num[i]);
            }
            printf(" is not a multiple of 9.");
        }
        printf("\n");
    }
}

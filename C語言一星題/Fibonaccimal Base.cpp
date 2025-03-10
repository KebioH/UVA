#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

void fib(int num) {
    int f[50];
    f[0] = 1; //題目有說費氏編碼從1開始
    f[1] = 2;

    int index;
    for (int i = 2; i < 50; i++) {
        f[i] = f[i - 1] + f[i - 2];
        if (f[i] > num) {
            index = i - 1;  // 記錄最後一個 <= num 的索引
            break;
        }
    }

    int limit = num, record[50], j = 0;
    for (int i = index; i >= 0; i--) {
        if (f[i] <= limit) {
            limit -= f[i]; //精隨
            record[j++] = f[i];
        }
    }
    
    printf("%d = ", num); 

    bool first = false;
    for (int i = index; i >= 0; i--) {
        bool found = false;
        for (int k = 0; k < j; k++) {
            if (record[k] == f[i]) {
                found = true;
                break;
            }
        }
        if (found) {
            printf("1");
            first = true;
        }
        else if (first) { //精隨 第一項前不需要輸出0 後面如果!found的話就可以輸出了
            printf("0");
        }
    }
    printf(" (fib)\n");
}

int main()
{
    int n;
    scanf("%d", &n);
    while (n--) {
        int num;
        scanf("%d", &num);
        fib(num);
    }
}


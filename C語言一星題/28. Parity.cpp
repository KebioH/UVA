#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char num[100];
void bin(int n, int *index, int *sum) { //這意味著函式內部的變數是一個「拷貝」，而不是原始變數本身 //所以要用 * 取地址
    if (n > 1) {
        bin(n / 2, index, sum);
    }

    num[(*index)++] = n % 2 + '0'; //注意
    if (n % 2) (*sum)++;
}

int main()
{
    int n;
    while (scanf("%d", &n) == 1 && n != 0) {
        int index = 0, sum = 0;
        bin(n, &index, &sum); //記得加取址符號&
        num[index] = '\0'; // 字串結束標誌 不然印不出來
        printf("The parity of %s is %d (mod 2).\n", num, sum);
    }
}

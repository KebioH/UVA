#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void decode(long long int n) { //這有點類似換錢 //因為都是if所以會一路執行下去
    if (n / 10000000 > 0) {
        decode(n / 10000000);
        printf(" kuti");
        n %= 10000000;
    }
    if (n / 100000 > 0) {
        printf(" %lld lakh", n / 100000);
        n %= 100000;
    }
    if (n / 1000 > 0) {
        printf(" %lld hajar", n / 1000);
        n %= 1000;
    }
    if (n / 100 > 0) {
        printf(" %lld shata", n / 100);
        n %= 100;
    }
    if (n != 0) printf(" %lld", n); //最後一行
}

int main()
{
    long long int n;
    int count = 0;
    while (scanf("%lld", &n) != EOF) {
        count++;
        printf("   %d.", count);
        if (n == 0) { //很常時候0可以
            printf(" 0");
        }
        else {
            decode(n);
        }
        printf("\n");
    }
}

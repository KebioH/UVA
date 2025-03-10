#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n;
    while (scanf("%d", &n) != EOF) {
        int sum = n; //笑死 只要把sum先設成n就好 總共喝掉可樂的數量 一開始就應該包括買來的n
        while (n >= 3) {
            sum += n / 3;
            n = n / 3 + n % 3;
        }
        if (n % 3 == 2) sum++;
        
        printf("%d\n", sum);
    }
}


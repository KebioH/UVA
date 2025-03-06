#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int digitSum(int x) {
    if (x < 10) return x;
    int num = x, sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return digitSum(sum);
}

int main()
{
    int n;
    while (scanf("%d", &n) == 1 && n != 0) {
        printf("%d\n", digitSum(n));
    }
}

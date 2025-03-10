#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int gcd(int i, int j) { //太急了 不會就用推的就好
    if (j == 0) {
        return i;
    }
    return gcd(j, i % j);
}

int main()
{
    int n;
    while (scanf("%d", &n) == 1 && n != 0) {
        int g = 0;
        for (int i = 1; i < n; i++) {
            for (int j = i + 1; j <= n; j++) {
                g += gcd(i, j);
            }
        }
        printf("%d\n", g);
    }
}


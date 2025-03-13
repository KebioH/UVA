#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int f(int x, int a, int b, int c) {
    return a * x * x + b * x + c;
}

int main()
{
    int a, b, c, d, L;
    while (scanf("%d%d%d%d%d", &a, &b, &c, &d, &L) && (a != 0 || b != 0 || c != 0 || d != 0 || L != 0)) {
        int count = 0;
        for (int i = 0; i <= L; i++) {
            if (f(i, a, b, c) % d == 0) {
                count++;
            }
        }
        printf("%d\n", count);
    }
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
    int a, b;
    while (scanf("%d%d", &a, &b) == 2 && (a != 0 || b != 0)) {
        int count = 0;
        for (int i = a; i <= b; i++) {
            if (i == (int)sqrt(i) * (int)sqrt(i)) { //浮點數精度問題
                count++;
            }
        }

        printf("%d\n", count);
    }
}

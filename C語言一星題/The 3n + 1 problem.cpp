#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int algorithm(int n, int c) {
    if (n == 1) return c + 1;
    if (n % 2) {
        return algorithm(3 * n + 1, c + 1);
    }
    else {
        return algorithm(n / 2, c + 1);
    }
}

int main()
{
    int i, j;
    while (scanf("%d%d", &i, &j) != EOF) {
        int x = i, y = j;
        if (i > j) swap(&i, &j);

        int max = 0;
        for (int a = i; a <= j; a++) {
            if (max < algorithm(a, 0)) max = algorithm(a, 0);
        }
        printf("%d %d %d\n", x, y, max);
    }
}

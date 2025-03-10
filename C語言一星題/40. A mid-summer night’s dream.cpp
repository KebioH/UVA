#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int compare(const void* x, const void* y) {
    return *(int*)x - *(int*)y;
}

int main()
{
    int n;
    while (scanf("%d", &n) != EOF) {
        int* x = (int*)malloc(n * sizeof(int));
        for (int index = 0; index < n; index++) {
            scanf("%d", &x[index]);
        }
        qsort(x, n, sizeof(int), compare);

        int a, count = 0, mid = 0;
        if (n % 2) {
            a = x[n / 2];
            for (int i = 0; i < n; i++) {
                if (x[i] == a) count++;
            }
            mid = 1;
        } else {
            int L = x[(n / 2) - 1];
            int R = x[n / 2];
            a = L; //因為前面已經整理過了

            for (int i = 0; i < n; i++) {
                if (x[i] >= L && x[i] <= R) count++;
            }
            mid = R - L + 1;
        }
        printf("%d %d %d\n", a, count, mid);
        free(x);
    }
}

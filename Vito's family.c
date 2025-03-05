#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compare(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

int main()
{
    int c;
    scanf("%d", &c);
    while (c--) {
        int n;
        scanf("%d", &n);
        int* a = (int*)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        qsort(a, n, sizeof(int), compare);

        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += abs(a[n/2] - a[i]);
        }
        printf("%d\n", sum);
    }
}

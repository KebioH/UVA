#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//第一個數字是能得到該算式最小值的A。
//第二個數字是 | Xi − A | 為最小值的數量。
//第三行數字是有多少不同值可以讓總距離為最小。

int compare(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        int* xi = (int*)malloc(n * sizeof(int));
        for (int index = 0; index < n; index++) {
            scanf("%d", &xi[index]);
        }
        qsort(xi, n, sizeof(int), compare);

        int a, count = 0, mid;
        if (n % 2 == 1) {
            a = xi[n / 2];
            for (int i = 0; i < n; i++) {
                if (xi[i] == a) {
                    count++;
                }
            }
            mid = 1;
        }
        else {
            int l = xi[n / 2 - 1];
            int r = xi[n / 2];
            a = l;

            for (int i = 0; i < n; i++) {
                if (xi[i] >= l && xi[i] <= r) {
                    count++;
                }
            }
            mid = r - l + 1;
        }
        printf("%d %d %d\n", a, count, mid);
        free(xi);
    }
}

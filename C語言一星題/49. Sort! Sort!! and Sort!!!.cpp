#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int m;//餘數打在這
int compare(const void* a, const void *b) {
    int num1 = *(int*)a;
    int num2 = *(int*)b;

    int mod1 = num1 % m;
    int mod2 = num2 % m;

    if (mod1 != mod2) return mod1 - mod2;

    int isOdd1 = num1 % 2 != 0;
    int isOdd2 = num2 % 2 != 0;

    if (isOdd1 != isOdd2) return isOdd2 - isOdd1; //精隨

    if (isOdd1 && isOdd2) return num2 - num1;

    return num1 - num2;
}

int main()
{
    int n;
    while (scanf("%d%d", &n, &m) == 2 && (n != 0 || m != 0)) {
        int* arr = (int*)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        qsort(arr, n, sizeof(int), compare);

        printf("%d %d\n", n, m);
        for (int i = 0; i < n; i++) {
            printf("%d\n", arr[i]);
        }
            
        free(arr);
    }
    printf("0 0\n");
}

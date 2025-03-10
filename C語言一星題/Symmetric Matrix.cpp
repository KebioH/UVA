#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

bool isSym(long long int* arr, int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) return false;
        if (i >= size - i - 1) {
            return true;
        }
        if (arr[i] == arr[size - i - 1]) {
            continue;
        }
        return false;
    }
}

int main()
{
    int c;
    scanf("%d", &c);
    for (int times = 1; times <= c; times++) {
        int n;
        getchar();
        getchar();
        getchar();
        getchar();
        scanf("%d", &n);

        long long int arr[100000]; //超過2^32就要用

        for (int i = 0; i < n * n; i++) {
            scanf("%lld", &arr[i]);
        }

        if (isSym(arr, n * n)) {
            printf("Test #%d: Symmetric.\n", times);
        } else{
            printf("Test #%d: Non-symmetric.\n", times);
        }   
    }
}

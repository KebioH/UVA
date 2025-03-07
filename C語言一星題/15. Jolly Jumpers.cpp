#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    while (scanf("%d", &n) != EOF) {
        int* arr = (int*)malloc(n * sizeof(n));
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        int count = 0;
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < n; j++) {
                if (abs(arr[j] - arr[j - 1]) == i) {
                    count++;
                    break;
                }
            }
        }

        if (count == n - 1) {
            printf("Jolly\n");
        }
        else {
            printf("Not jolly\n");
        }
    }
}


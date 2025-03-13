#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compare(const void* x, const void* y) {
    return *(int*)y - *(int*)x;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--) {
        int arr[40], index = 0;
        while (1) {
            scanf("%d", &arr[index]);
            if (arr[index] == 0) break;
            index++;
        }

        qsort(arr, index, sizeof(int), compare);
        
        int sum = 0;
        for (int i = 0; i < index; i++) {
            sum += 2 * pow(arr[i], i + 1);
            if (sum > 5000000) {
                printf("Too expensive\n");
                goto end;
            }
        }

        printf("%d\n", sum);
    end:;
    }
}

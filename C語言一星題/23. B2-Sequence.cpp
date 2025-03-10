#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool increase(int* a, int size) {
    for (int i = 0; i < size - 1; i++) {
        if (a[i] > a[i + 1] || a[i] < 1) {
            return false;
        }
    }
    return true;
}

int main()
{
    int n, index = 0;
    while (scanf("%d", &n) != EOF) {
        int a[100] = { 0 };
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        
        int count = 0, max = 0;
        int size = n * (n + 1) / 2;
        int* record = (int *)malloc(size * sizeof(int));
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) { //這很好用 白癡 要背起來這個演算法
                record[count++] = a[i] + a[j];
            }
        }

        bool isB2 = true;
        int sum[20001] = { 0 }; //兩個正整數相加最大不超過 20000
        for (int i = 0; i < count; i++) {
            sum[record[i]]++; //記得 
            if (sum[record[i]] > 1) { //直接在這判斷就好 不需要再搞一個迴圈
                isB2 = false;
                break;
            }
        }

        free(record);

        index++;
        if (isB2 && increase(a, n)) {
            printf("Case #%d: It is a B2-Sequence.\n", index);
        }
        else {
            printf("Case #%d: It is not a B2-Sequence.\n", index);
        }
    }
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    while (n--) {
        int L, arr[50];
        scanf("%d", &L);

        for (int i = 0; i < L; i++) {
            scanf("%d", &arr[i]);
        }

        int count = 0;
        for (int i = 0; i < L; i++) {
            for (int j = 0; j < L - i - 1; j++) { //要記得 -1 不然會多換
                if (arr[j] > arr[j + 1]) { //小心這裡不要寫錯 要練習除錯啦 就從頭看到尾 太依賴Chat GPT了
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                    count++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n", count);
    }
}

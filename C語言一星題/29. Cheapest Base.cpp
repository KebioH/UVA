#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    int c;
    scanf("%d", &c);
    for (int index = 1; index <= c; index++) {
        int cost[36];
        for (int i = 0; i < 36; i++) {
            scanf("%d", &cost[i]);
        }
        
        int n;
        scanf("%d", &n);
        int* num = (int*)malloc(n * sizeof(int));

        printf("Case %d:\n", index);
        for (int i = 0; i < n; i++) {
            scanf("%d", &num[i]);
            int arr[100], sumArr[40], min = INT_MAX, minBase;
            for (int base = 2; base <= 36; base++) {
                int temp = num[i], size = 0, sum = 0;
                if (temp == 0) arr[size++] = 0; //因為0就是0
                while (temp != 0) { //進位制的位元就這樣取 很神奇
                    arr[size++] = temp % base; //使用「除以𝑏取餘數」的方式，不斷除到商數為 0，收集所有餘數並逆序，就得到 𝑁 在 base b 下的 digit 序列。
                    temp /= base;
                }
                
                for (int j = 0; j < size; j++) {
                    sum += cost[arr[j]]; //確實這樣寫很方便 有時候不知道要不要用兩個迴圈就這樣寫
                    sumArr[base] = sum;
                }
                if (min > sum) min = sum;
            }

            printf("Cheapest base(s) for number %d: ", num[i]);
            for (int base = 2; base <= 36; base++) {
                if (sumArr[base] == min) {
                    printf("%d ", base);
                }
            }
            printf("\n");
        }
        printf("\n");
        free(num);
    }
}








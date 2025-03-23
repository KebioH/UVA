#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>

int main() {
    int n, m;
    scanf("%d", &n);
    
    int cost[36];
    for (int index = 1; index <= n; index++) {
        for (int i = 0; i < 36; i++) {
            scanf("%d", &cost[i]);
        }
        printf("Case %d:\n", index);

        scanf("%d", &m);
        while (m--) {
            int num, sum[37] = { 0 };
            scanf("%d", &num);

            int min = INT_MAX;
            for (int i = 2; i <= 36; i++) {
                int temp = num;

                if (temp == 0) sum[i] += cost[0]; //又漏掉處理0了
                
                while (temp != 0) {
                    sum[i] += cost[temp % i];
                    temp /= i;
                }
                if (min > sum[i]) min = sum[i]; //這個要放在外面
            }

            printf("Cheapest base(s) for number %d: ", num);
            for (int i = 2; i <= 36; i++) {
                if (sum[i] == min) {
                    printf("%d ", i);
                }
            }
            printf("\n");
        }
        printf("\n");
    }
}

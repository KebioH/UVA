#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int c;
    scanf("%d", &c);
    for (int index = 1; index <= c; index++) {
        int x1, y1, x2, y2;
        scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
        // (0 0) 這種題就是要找出規律
        // (0 1) (1 0)  橫項加起來都一樣 判斷完總和後再加上x座標就好了
        // (0 2) (1 1) (2 0)
        // (0 3) (1 2) (2 1) (3 0)
        // (0 4) (1 3) (2 2) (3 1) (4 0)

        int add2 = x2 + y2;
        long long int sum2 = 0; //看到側資變成負數就是用long long int
        for (int i = 1; i <= add2; i++) {
            sum2 += i;
        }
        sum2 += x2;

        int add1 = x1 + y1;
        long long int sum1 = 0;
        for (int i = 1; i <= add1; i++) {
            sum1 += i;
        }
        sum1 += x1;

        printf("Case %d: %lld\n", index, sum2 - sum1);
    }

}


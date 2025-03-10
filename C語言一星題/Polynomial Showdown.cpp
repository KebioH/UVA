#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int arr[9];
    while (scanf("%d%d%d%d%d%d%d%d%d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6], &arr[7], &arr[8]) != EOF) {
        bool first = true;
        bool allZero = true;

        for (int power = 8; power >= 0; power--) { // 到0後還會繼續
            int coef = arr[8 - power];

            if (coef == 0) continue;
            allZero = false;

            if (!first) {
                if (coef > 0) {
                    printf(" + "); //這裡空格就好
                }
                else {
                    printf(" - ");
                    coef = -coef;
                }
            }
            else {
                if (coef < 0) {
                    printf("-");
                    coef = -coef;
                }
                first = false;
            }

            if (power == 0) {
                printf("%d", coef);
            }
            else if (coef == 1) {
                if (power == 1) {
                    printf("x");
                }
                else {
                    printf("x^%d", power);
                }
            }
            else {
                if (power == 1) {
                    printf("%dx", coef);
                }
                else {
                    printf("%dx^%d", coef, power);
                }
            }
        }

        if (allZero) printf("0");

        printf("\n");
    }
}

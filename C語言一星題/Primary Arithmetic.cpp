#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    char num1[9] = { 0 }, num2[9] = { 0 };
    while (scanf("%s%s", num1, num2) == 2 && (num1[0] != '0' || num2[0] != '0')) {
        int sum = 0, temp = 0;
        int i = strlen(num1) - 1, j = strlen(num2) - 1;

        while (i >= 0 || j >= 0) {
            // 避免存取越界 很重要
            int digit1 = (i >= 0) ? num1[i] - '0' : 0;
            int digit2 = (j >= 0) ? num2[j] - '0' : 0;

            if (digit1 + digit2 + temp > 9) {
                temp = 1;
                sum++;
            }
            else {
                temp = 0;
            }
            i--;
            j--;
        }

        if (sum == 0) {
            printf("No carry operation.\n");
        }
        else if (sum == 1) {
            printf("1 carry operation.\n");
        }
        else {
            printf("%d carry operations.\n", sum);
        }


    }
}


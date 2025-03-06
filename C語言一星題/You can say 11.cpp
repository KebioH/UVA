#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char num[1000];
    while (scanf("%s", num) && num[0] != '0') {
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < strlen(num); i++) {
            if (i % 2) {
                sum1 += num[i] - '0';
            }
            else {
                sum2 += num[i] - '0';
            }
        }

        if (abs(sum1 - sum2) % 11 == 0) {
            printf("%s is a multiple of 11.\n", num);
        }
        else {
            printf("%s is not a multiple of 11.\n", num);
        }
    }
}

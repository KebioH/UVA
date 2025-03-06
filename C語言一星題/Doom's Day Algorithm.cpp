#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int c;
    int m, d;
    int day[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    const char *w[7] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"}; // 2011 / 1 / 1 是禮拜六
    scanf("%d", &c);
    while(c--) {
        int sum = 0;
        scanf("%d%d", &m, &d);
        for (int i = 0; i < m - 1; i++) {
            sum += day[i];
        }
        sum += d;
        printf("%s\n", w[(sum - 1) % 7]);
    }
}

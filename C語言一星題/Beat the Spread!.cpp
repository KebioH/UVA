#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int c;
    scanf("%d", &c);
    while (c--) {
        int s, d;
        scanf("%d%d", &s, &d);

        int a = (s + d) / 2;
        int b = (s - d) / 2;

        if (a >= 0 && b >= 0 && a + b == s && a - b == d) { //non-negative integers. 0也算
            printf("%d %d\n", a, b);
        }
        else {
            printf("impossible\n");
        }

        // a + b = s   2a = s + d
        // a - b = d   2b = s - d
    }
}

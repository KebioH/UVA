#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int v, t;
    while (scanf("%d%d", &v, &t) != EOF) {
        printf("%d\n", v * t * 2);
    }
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
    long long int a, b;
    while (scanf("%lld%lld", &a, &b) != EOF) { // End of File
        printf("%lld\n", llabs(a - b)); // 要llabs
    }
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX 1000000

int main()
{
    int a;
    while (scanf("%d", &a) != EOF) {
        int arr[MAX] = { 0 }, n = 0;
        while (scanf("%d", &arr[n]) == 1) {
            n++;
            if (getchar() == '\n') break;
        }

        long long int sum = 0, pow = 1;
        for (int i = 1; i < n; i++) {
            sum += arr[i - 1] * i * pow;
            pow *= a;
        }
            
        printf("%lld\n", sum);
    }
}

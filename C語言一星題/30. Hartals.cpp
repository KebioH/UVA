#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, p, arr[100];
        scanf("%d%d", &n, &p);
        
        for (int i = 0; i < p; i++) {
            scanf("%d", &arr[i]);
        }

        int sum = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < p; j++) {
                if (i % arr[j] == 0 && i % 7 != 0 && i % 7 != 6) {
                    sum++;
                    break;
                }
            }
        }
        printf("%d\n", sum);

    }
}


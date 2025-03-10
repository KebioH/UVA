#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n, m;
    while (scanf("%d%d", &n, &m) != EOF) {
        if (m == 0) { //挺白癡的 為甚麼m可以等於0啦 = =
            printf("Boring!\n");
            continue;
        }

        int a[1000], index = 1;
        bool boring = false;
        while (index++) {
            a[index] = n;
            if (n == 1) break;
            if (n % m) {
                boring = true;
                break;
            }
            n /= m;
        }

        if (!boring) {
            for (int i = 2; i <= index; i++) {
                printf("%d ", a[i]);
            }
        }
        else {
            printf("Boring!");
        }
        
        printf("\n");
    }
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    // (3, 1) (3, 2) (3, 3) (2, 3) (1, 3) 3 5
    // (1, 4) (2, 4) (3, 4) (4, 4) (4, 3) (4, 2) (4, 1) 4 7
    // (5, 1) (5, 2) (5, 3) (5, 4) (5, 5) (4, 5) (3, 5) (2, 5) (1, 5) 5 9
    int n;
    while (scanf("%d", &n) == 1 && n != 0) {
        if (n == 1) {
            printf("1 1\n");
            continue;
        }
        else if (n == 2) {
            printf("1 2\n");
            continue;
        }
        else if (n == 3) {
            printf("2 2\n");
            continue;
        }
        else if (n == 4) {
            printf("2 1\n");
            continue;
        }
        n -= 4;

        int i = 5, record = 3;
        while (n > i) {
            n -= i;
            i += 2;
            record++;
        }
        
        if (record % 2 == 1) {
            if (n <= record) {
                printf("%d %d\n", record, n);
            }
            else {
                printf("%d %d\n", record - (n - record), record);
            }
        }
        else {
            if (n <= record) {
                printf("%d %d\n", n, record);
            }
            else {
                printf("%d %d\n", record, record - (n - record));
            }
        }
    }
}

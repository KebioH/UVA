#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int r, c, index = 0;
    while (scanf("%d%d", &r, &c) == 2 && (r != 0 || c != 0)) {
        index++;

        char str[100][100];
        for (int i = 0; i < r; i++) {
            scanf("%s", str[i]);
        }

        printf("Field #%d:\n", index);
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (str[i][j] == '*') {
                    printf("*");
                    continue;
                }
                
                int sum = 0;
                for (int dx = -1; dx <= 1; dx++) {
                    for (int dy = -1; dy <= 1; dy++) {
                        if (i + dx >= 0 && i + dx <= r && j + dy >= 0 && j + dy <= c) { //甚麼時候寫r 甚麼時候寫c 要再熟悉一點
                            if (str[i + dx][j + dy] == '*') {
                                sum++;
                            }
                        }
                    }
                }
                printf("%d", sum);
            }
            printf("\n");
        }
        printf("\n");
    }
}


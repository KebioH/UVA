#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    char table[] = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./"; // \\代表反斜線
    while (fgets(str, sizeof(str), stdin)) {
        int len = strlen(str);
        if (str[len - 1] == '\n') {
            str[len - 1] = '\0'; // '0'表示字串的結束
            len--;
        }

        for (int i = 0; i < len; i++) {
            if (str[i] == ' ') { //單個字元用單引號
                printf(" ");
                continue;
            }
            for (int j = 0; j < strlen(table); j++) {
                if (str[i] == table[j + 2]) {
                    printf("%c", table[j]);
                    break;
                }
            }
        }
        printf("\n");
    }
}


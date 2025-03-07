#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    int L, N;
    scanf("%d%d", &L, &N);
    char none[30][2][30]; //通常要讀的時候都會放棄最右邊
    for (int i = 0; i < L; i++) {
        scanf("%s %s", none[i][0], none[i][1]);
    }

    while (N--) {
        char temp[20];
        scanf("%s", temp);
        int len = strlen(temp) - 1;
        for (int i = 0; i < L; i++) {
            if (strcmp(temp, none[i][0]) == 0) {
                printf("%s\n", none[i][1]);
                goto end;
            }
        }

        if (strchr("aeiou", temp[len - 1]) == NULL && temp[len] == 'y') { //新招 可以偷學
            temp[len] = 'i';
            temp[len + 1] = 'e';
            temp[len + 2] = 's';
            temp[len + 3] = '\0'; //記得加
            printf("%s\n", temp);
        }
        else if (strchr("osx", temp[len]) != NULL || ((temp[len - 1] == 'c' || temp[len - 1] == 's') && temp[len] == 'h')) {
            temp[len + 1] = 'e';
            temp[len + 2] = 's';
            temp[len + 3] = '\0';
            printf("%s\n", temp);
        }
        else {
            temp[len + 1] = 's';
            temp[len + 2] = '\0';
            printf("%s\n", temp);
        }

    end:;
    }

}

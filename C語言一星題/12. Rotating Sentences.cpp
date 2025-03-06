#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    char str[110][110]; //記得每次的側資要多開 笑死...
    int index = 0, max = 0;
    while (fgets(str[index], sizeof(str[index]), stdin)) {
        if (str[index][0] == '\n') break; //只看題目完全不知道是輸入換行停止
        str[index][strcspn(str[index], "\n")] = '\0';
        if (max < strlen(str[index])) max = strlen(str[index]);
        index++;
    }
    for (int i = 0; i < max; i++) {
        for (int j = index - 1; j >= 0; j--) {
            if (i >= strlen(str[j])) { //用長度判斷
                printf(" ");
            }
            else {
                printf("%c", str[j][i]);
            }
        }
        printf("\n");
    }
}

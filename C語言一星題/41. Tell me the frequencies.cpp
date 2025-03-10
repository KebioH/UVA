#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    while (fgets(str, sizeof(str), stdin)) { //要考慮空格
        int asc[128] = { 0 }, max = 0; //是0 - 127所以是128
        str[strcspn(str, "\n")] = '\0';
        for (int i = 0; i < strlen(str); i++) {
            asc[str[i]]++;
            if (max < asc[str[i]]) max = asc[str[i]];
        }

        for (int i = 1; i <= max; i++) {
            for (int j = 128; j >= 0; j--) {
                if (asc[j] == i) {
                    printf("%d %d\n", j, i);
                }
            }
        }
    }
}

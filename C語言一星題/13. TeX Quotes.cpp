#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char str[1000];
    bool direction = true;
    while (fgets(str, sizeof(str), stdin)) {
        for (int i = 0; i < strlen(str) - 1; i++) {
            if (str[i] == '"') {
                if (direction) {
                    printf("``");
                }
                else {
                    printf("''");
                }
                direction = !direction;
                continue;
            }
            printf("%c", str[i]);
        }
        printf("\n");
    }

}

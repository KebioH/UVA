#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char input[100];
    while (scanf("%s", input) != EOF) {
        int value, sum = 0, max = 0;
        for (int i = 0; i < strlen(input); i++) {
            if (input[i] >= '0' && input[i] <= '9') { //測資都會少給很多 要注意
                value = input[i] - '0';
            }
            else if (input[i] >= 'A' && input[i] <= 'Z') {
                value = input[i] - 'A' + 10;
            }
            else if (input[i] >= 'a' && input[i] <= 'z') {
                value = input[i] - 'a' + 36;
            }

            if (max < value) max = value; //max決定最小進位值N

            sum += value;
        }

        bool found = false;
        for (int i = max + 1; i <= 62; i++) { 
            if (sum % (i - 1) == 0) {          
                printf("%d\n", i);
                found = true;
                break;
            }
        }

        if (!found) {
            printf("such number is impossible!\n");
        }
    }
}


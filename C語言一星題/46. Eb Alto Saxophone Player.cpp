#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <string.h>


int main() {
    int t;
    scanf("%d", &t);
    getchar();

    char str[200];
    const int finger[] = { 0, 1, 2, 3, 4, 7, 8, 9, 10 };
    while (t--) {
        fgets(str, sizeof(str), stdin);
        if (strcmp(str, "\n") == 0) {
            printf("0 0 0 0 0 0 0 0 0 0\n");
            continue;
        }

        int count[11] = { 0 };
        bool lastTouch[11] = { false };
        for (int i = 0; i < strlen(str); i++) {
            bool nowTouch[11] = { false };

            switch (str[i])
            {
            case 'a':
                nowTouch[2] = true;
                nowTouch[3] = true;
                break;
            case 'b':
                nowTouch[2] = true;
                break;
            case 'C':
                nowTouch[3] = true;
                break;
            case 'A':
                nowTouch[1] = true;
                nowTouch[2] = true;
                nowTouch[3] = true;
                break;
            case 'B':
                nowTouch[1] = true;
                nowTouch[2] = true;
                break;
            default:
                if (str[i] >= 'c' && str[i] <= 'g') {
                    for (int j = 2; j <= 8 - (str[i] - 'c'); j++) {
                        nowTouch[finger[j]] = true;
                    }
                }
                else if (str[i] >= 'D' && str[i] <= 'G') {
                    for (int j = 1; j <= 7 - (str[i] - 'D'); j++) {
                        nowTouch[finger[j]] = true;
                    }
                }
                break;
            }

            if (i == 0) {
                for (int j = 1; j <= 10; j++) {
                    if (nowTouch[j]) {
                        count[j]++;
                    }
                }
            }
            else {
                for (int j = 1; j <= 10; j++) {
                    if (nowTouch[j] && !lastTouch[j]) {
                        count[j]++;
                    }
                }
            }

            for (int j = 1; j <= 10; j++) {
                lastTouch[j] = nowTouch[j];
            }
        }

        for (int i = 1; i <= 10; i++) {
            printf("%d ", count[i]);
        }

        printf("\n");
    }
}

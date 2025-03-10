#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int n;
    scanf("%d", &n);
    getchar();

    char str[200];
    int finger[] = { 0, 1, 2, 3, 4, 7, 8, 9, 10 };
    while (n--) {
        fgets(str, sizeof(str), stdin);
        str[strcspn(str, "\n")] = '\0';
        if (strcmp(str, "") == 0) {
            printf("0 0 0 0 0 0 0 0 0 0\n"); //傻眼 看到一堆0就是有空
            continue;
        }
        int count[11] = { 0 };
        bool lastTouch[11] = { false }; //紀錄上次在幹嘛

        for (int i = 0; i < strlen(str); i++) {
            bool nowTouch[11] = { false }; //紀錄現在在幹嘛

            if (str[i] >= 'c' && str[i] <= 'g') {
                for (int j = 2; j <= 8 - (str[i] - 'c'); j++) {
                    nowTouch[finger[j]] = true;
                }
            }
            else if (str[i] == 'a') {
                nowTouch[2] = true;
                nowTouch[3] = true;
            }
            else if (str[i] == 'b') {
                nowTouch[2] = true;
            }
            else if (str[i] == 'C') {
                nowTouch[3] = true;
            }
            else if (str[i] >= 'D' && str[i] <= 'G') {
                for (int j = 1; j <= 7 - (str[i] - 'D'); j++) {
                    nowTouch[finger[j]] = true;
                }
            }
            else if (str[i] == 'A') {
                nowTouch[1] = true;
                nowTouch[2] = true;
                nowTouch[3] = true;
            }
            else if (str[i] == 'B') {
                nowTouch[1] = true;
                nowTouch[2] = true;
            }

            //以下招數很好用 要熟悉 很像minecraft中的tag
            if (!i) {
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

            for (int j = 1; j <= 10; j++) { //精隨 現在會變成 下一次的過去
                lastTouch[j] = nowTouch[j];
            }


        }

        for (int i = 1; i <= 10; i++) {
            printf("%d", count[i]);
            if (i < 10) printf(" ");
        }

        printf("\n");

    }
}

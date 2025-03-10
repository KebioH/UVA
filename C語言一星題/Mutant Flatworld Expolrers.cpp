#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    int maxX, maxY;
    scanf("%d%d", &maxX, &maxY);

    int scentX[100], scentY[100]; //指令集的長度皆不會超過 100 個字元長
    int x, y, count = 0; //count要放外面
    int dx[] = { 0, 1, 0, -1 }, dy[] = { 1, 0, -1, 0 };
    char initialPos;
    while (scanf("%d%d %c", &x, &y, &initialPos) != EOF) { // 加空格忽略換行符
        char pos[] = "NESW";
        int index;
        for (int i = 0; i < 4; i++) {
            if (pos[i] == initialPos) {
                index = i;
                break;
            }
        }

        char command[100];
        scanf("%s", command);

        bool lost = false;
        int len = strlen(command);
        for (int i = 0; i < len; i++) {
            if (command[i] == 'R') {
                index = (index + 1) % 4; //要想到可以這樣寫
            }
            else if (command[i] == 'L') {
                index = (index + 3) % 4;
            }
            else {
                int newX = x + dx[index]; //這樣比原本好 精隨就在這
                int newY = y + dy[index];

                if (newX < 0 || newY < 0 || newX > maxX || newY > maxY) {
                    for (int j = 0; j < count; j++) {
                        if (scentX[j] == x && scentY[j] == y) {
                            goto exit;
                        }
                    }
                    scentX[count] = x;
                    scentY[count++] = y;
                    lost = true;
                    break;
                }
                x = newX;
                y = newY;

            exit:;
            }
        }
        
        if (lost) {
            printf("%d %d %c LOST\n", x, y, pos[index]);
        }
        else {
            printf("%d %d %c\n", x, y, pos[index]);
        }

    }
}

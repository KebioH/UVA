#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;
    while (scanf("%d", &n) == 1 && n != 0) {
        int top = 1, north = 2, west = 3;
        while (n--) {
            char command[10];
            scanf("%s", command);

            int temp;
            if (command[0] == 'e') {
                temp = top;
                top = west;
                west = 7 - temp;
            }
            else if (command[0] == 's') {
                temp = top;
                top = north;
                north = 7 - temp;
            }
            else if (command[0] == 'w') {
                temp = top;
                top = 7 - west;
                west = temp;
            }
            else {
                temp = top;
                top = 7 - north;
                north = temp;
            }
        }
        printf("%d\n", top);
    }
}

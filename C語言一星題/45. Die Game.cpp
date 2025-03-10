#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    while (scanf("%d", &n) == 1 && n != 0) {
        int top = 1, north = 2, west = 3, east = 4, south = 5, bottom = 6;
        //只要知道top,west,north即可，其餘的用和為7來推~

        while (n--) {
            char pos[10];
            scanf("%s", pos);
            int temp; //精隨阿

            if (strcmp(pos, "north") == 0) {
                temp = top;
                top = south;
                south = bottom;
                bottom = north;
                north = temp; //精隨阿

            }
            else if (strcmp(pos, "west") == 0) {
                temp = top;
                top = east;
                east = bottom;
                bottom = west;
                west = temp;
            }
            else if (strcmp(pos, "south") == 0) {
                temp = top;
                top = north;
                north = bottom;
                bottom = south;
                south = temp;
            }
            else {
                temp = top;
                top = west;
                west = bottom;
                bottom = east;
                east = temp;
            }
        }
        printf("%d\n", top);
    }
}


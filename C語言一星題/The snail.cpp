#include <stdio.h>

//要看清楚題目

int main() {
    int h, d;
    float u, f;
    while (scanf("%d%f%d%f", &h, &u, &d, &f) == 4 && (h != 0 || u != 0 || d != 0 || f != 0)) {
        float sum = 0;
        float fatigue = u * f / 100;
        int day = 0;
        while (1) {
            if (u > 0) {
                sum += u;
            }
            day++;
            if (sum > h) { //本來就要分開判斷
                printf("success on day %d\n", day);
                break;
            }
            sum -= d;
            
            if (sum < 0) { //掉下來了
                printf("failure on day %d\n", day);
                break;
            }
            u -= fatigue;        }
        }

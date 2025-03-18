#include <stdio.h>
#include <string.h>

int main() {
    int t, index = 0;
    scanf("%d", &t);
    while (t--) {
        getchar();
        index++;
        char now[20], birth[20];
        int nowD, nowM, nowY, birD, birM, birY;
        scanf("%s%s", now, birth);
        sscanf(now, "%d/%d/%d", &nowD, &nowM, &nowY);
        sscanf(birth, "%d/%d/%d", &birD, &birM, &birY);
        
        if (nowY > birY) {
            int y = nowY - birY;
            if (nowM > birM || (nowM == birM && nowD >= birD)) {
                if (y <= 130) { //看清楚題目
                    printf("Case #%d: %d\n", index, nowY - birY);
                } else {
                    printf("Case #%d: Check birth date\n", index);
                }
            } else {
                printf("Case #%d: %d\n", index, nowY - birY - 1);
            }
        } else if (nowY == birY) {
            if (nowM > birM) {
                printf("Case #%d: 0\n", index);
            } else if (nowM == birM){
                if (nowD >= birD) {
                    printf("Case #%d: 0\n", index);
                } else {
                    printf("Case #%d: Invalid birth date\n", index);
                }
            } else {
                printf("Case #%d: Invalid birth date\n", index);
            }
        } else {
            printf("Case #%d: Invalid birth date\n", index);
        }
    }
}

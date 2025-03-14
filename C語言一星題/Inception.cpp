#include <stdio.h>
#include <string.h>

int main() {
    int n, index = 0;
    char name[10000][30];
    scanf("%d", &n);
    getchar(); //記得加
    while (n--) {
        char str[30];
        fgets(str, sizeof(str), stdin);
        str[strcspn(str, "\n")] = '\0';
        
        if (strncmp(str, "Sleep", 5) == 0) {
            sscanf(str, "Sleep %s", name[index]); //可以把字串複製過去 好屌
            index++;
        } else if (strcmp(str, "Test") == 0) {
            if (index == 0) {
                printf("Not in a dream\n");
            } else {
                printf("%s\n", name[index-1]);
            }
        } else if (strcmp(str, "Kick") == 0) {
            if(index > 0) index--; //本來就不能讓index到負的
        }
        
    }
}

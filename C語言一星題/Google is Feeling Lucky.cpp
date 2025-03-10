#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    for (int index = 1; index <= t; index++) {
        char www[10][100];
        int count[10], max = 0;
        
        printf("Case #%d:\n", index);
        for (int i = 0; i < 10; i++) {
            scanf("%s %d", www[i], &count[i]);
            if (max < count[i]) max = count[i];
        }
        
        for (int i = 0; i < 10; i++) {
            if (count[i] == max) {
                printf("%s\n", www[i]);
            }
        }
    }

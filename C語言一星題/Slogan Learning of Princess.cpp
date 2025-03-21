#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    getchar();
    
    char call[20][100], ret[20][100];
    
    int index = 0;
    while (n--) {
        fgets(call[index], sizeof(call[index]), stdin); //捨棄最後面的
        fgets(ret[index], sizeof(ret[index]), stdin);
        call[index][strcspn(call[index], "\n")] = '\0';
        ret[index][strcspn(ret[index], "\n")] = '\0';
        index++;
    }
    
    int c;
    scanf("%d", &c);
    getchar();
    while (c--) {
        char temp[100];
        fgets(temp, sizeof(temp), stdin);
        temp[strcspn(temp, "\n")] = '\0';
        
        for (int i = 0; i < index; i++) {
            if (strcmp(temp, call[i]) == 0) {
                printf("%s\n", ret[i]);
                break;
            }
        }
        
    }
}
Slogan Learning of Princess

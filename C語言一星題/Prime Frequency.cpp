#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPrime(int x) {
    if (x == 1) return false;
    for (int i = 2; i < x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

int main() {
    int t;
    scanf("%d", &t);
    for (int index = 1; index <= t; index++) {
        char str[2000]; //有時候RE是空間開不夠
        scanf("%s", str);
        
        int count[128] = { 0 };
        for (int i = 0; i < strlen(str); i++) {
            count[str[i]]++;
        }
        printf("Case %d: ", index);
        
        bool isPrint = false;
        for (int i = 0; i < 128; i++) {
            if (count[i] != 0 && isPrime(count[i])) {
                printf("%c", i); //直接印ACSII編號就印得出來了
                isPrint = true;
            }
        }
        
        if (!isPrint) {
            printf("empty\n");
        } else {
            printf("\n");
        }
    }
}

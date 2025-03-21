#include <stdio.h>

int main() {
    int s;
    while (scanf("%d", &s) == 1 && s != 0) {
        int sum = 1;
        while ((1 + sum)*sum / 2 <= s) {
            sum++;
        }
        
        int x = (1 + sum)*sum / 2 - s;
        printf("%d %d\n", x, sum);
    }
}

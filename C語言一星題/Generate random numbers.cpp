#include <stdio.h>
#include <math.h>

int main() {
    int  a;
    while (scanf("%d", &a) == 1 && a != 0) {
        int index = 0, history[1000], temp = a;
        
        while (1) {
            int power = pow(temp, 2);
            history[index] = temp;
            for (int i = 0; i < index; i++) {
                if (temp == history[i]) {
                    goto end;
                }
            }
            index++;
            temp = (power % 1000000) / 100;
        }
        
    end:;
        printf("%d\n", index);
    }
}

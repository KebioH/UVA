#include <stdio.h>

int isPerfect(int x) {
    int sum = 0;
    for (int i = 1; i <= x / 2; i++) {
        if (x % i == 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int arr[1000], index = 0;
    while (1) {
        scanf("%d", &arr[index]);
        index++;
        if (arr[index - 1] == 0) break; //條件設錯了 白痴
    }
    
    printf("PERFECTION OUTPUT\n");
    
    for (int i = 0; i < index - 1; i++) {
        int num = isPerfect(arr[i]);
        if (num < arr[i]) {
            printf("%5d  DEFICIENT", arr[i]);
        } else if (num == arr[i]) {
            printf("%5d  PERFECT", arr[i]);
        } else {
            printf("%5d  ABUNDANT", arr[i]);
        }
        printf("\n");
    }
    printf("END OF OUTPUT");
}

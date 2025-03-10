#include <stdio.h>

int main() {
    int index = 0, arr[10000]; //要把index當0 不然排序時候會沒有arr[0]就會出錯
    while (scanf("%d", &arr[index]) != EOF) {
        for (int i = 0; i < index; i++) { //這樣寫是O(n) 比qsort的o(nlogn)快很多
            if (arr[i] > arr[index]) {
                int temp = arr[index];
                for (int j = index; j > i - 1; j--) { //從index開始沒錯
                    arr[j + 1] = arr[j];
                }
                arr[i] = temp;
                break;
            }
        }
        index++;
        if (index % 2 == 1) {
            printf("%d\n", arr[index / 2]);
        } else {
            printf("%d\n", (arr[index / 2 - 1] + arr[index / 2]) / 2);
        }
    }
}

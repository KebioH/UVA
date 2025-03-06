#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    int c;
    scanf("%d", &c);
    getchar(); // 吃掉上一行的換行符 避免影響 fgets

    int times[26] = { 0 }, max = 0;
    while (c--) {
        char arr[1000];
        fgets(arr, sizeof(arr), stdin); 
        for (int i = 0; i < strlen(arr) - 1; i++) { //fgets會讀取\n 要注意
            if (arr[i] >= 'a' && arr[i] <= 'z') {
                times[arr[i] - 'a']++;
                if (max < times[arr[i] - 'a']) max = times[arr[i] - 'a']; //這樣寫就好了
                continue;
            }
            if (arr[i] >= 'A' && arr[i] <= 'Z') {
                times[arr[i] - 'A']++;
                if (max < times[arr[i] - 'A']) max = times[arr[i] - 'A'];
                continue;
            }
        }
    }

    for (int i = max; i > 0; i--) {
        for (int j = 0; j < 26; j++) {
            if (times[j] == i) {
                printf("%c %d\n", j + 'A', times[j]); // 加上'A'就可以變成字母了
            }
        }
    }
}

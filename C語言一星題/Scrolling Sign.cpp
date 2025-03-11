#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        int k, w;
        scanf("%d%d", &k, &w);

        char arr[100][100];
        for (int i = 0; i < w; i++) {
            scanf("%s", arr[i]);
        }

        int sum = k; //第一個單字完整顯示
        for (int i = 0; i < w - 1; i++) {
            int max = 0; //還是習慣給初始值 不要吝嗇
            for (int j = 1; j <= k; j++) { //j就是len 比較前len個字元
                if (strncmp(arr[i] + k - j, arr[i + 1], j) == 0) { //學到了指標運算可以放在字串函式中
                    max = j;
                }
            }

            sum += k - max; // 只新增不重疊的部分
        }
        printf("%d\n", sum);
    }
}

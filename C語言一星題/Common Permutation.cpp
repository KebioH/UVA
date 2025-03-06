#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    char a[1000], b[1000];
    while (scanf("%s%s", a, b) == 2) {
        int A[26] = { 0 }, B[26] = { 0 };

        for (int i = 0; a[i] != '\0'; i++) { //有時候分別計算會比較好 //順便記住這個用法
            A[a[i] - 'a']++;
        }

        for (int i = 0; b[i] != '\0'; i++) {
            B[b[i] - 'a']++;
        }

        for (char i = 'a'; i <= 'z'; i++) {
            int min = A[i - 'a'] < B[i - 'a'] ? A[i - 'a'] : B[i - 'a']; //sleep和street會出現ees
            for (int j = 0; j < min; j++) { //很酷的雙迴圈 會重複輸出該輸出的
                printf("%c", i);
            }
        }
        printf("\n");
    }
}

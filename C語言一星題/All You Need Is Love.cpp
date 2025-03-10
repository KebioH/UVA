#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int gcd(int a, int b) { //因為要一直減一樣的數字且最後會等於一樣的數字 所以要最大公因數 再減一次會變0
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b); //記起來
}

int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    for (int index = 1; index <= n; index++) {
        char s1[40], s2[40]; //可能會超過30位 寫這種題 size都要多給一點
        fgets(s1, sizeof(s1), stdin);
        fgets(s2, sizeof(s2), stdin);
        s1[strcspn(s1, "\n")] = '\0'; //string complement span 搜到目標就回傳索引值
        s2[strcspn(s2, "\n")] = '\0'; //好像可能要加\r
        
        int a = 0, b = 0, pow = 1;
        for (int i = strlen(s1) - 1; i >= 0; i--) {
            a += (s1[i] - '0') * pow; //這不是單純的0或1 是ASCII格式
            pow *= 2;
        }

        pow = 1;
        for (int i = strlen(s2) - 1; i >= 0; i--) {
            b += (s2[i] - '0') * pow;
            pow *= 2;
        }

        if (gcd(a, b) != 1) {
            printf("Pair #%d: All you need is love!\n", index);
        }
        else {
            printf("Pair #%d: Love is not all you need!\n", index);
        }
    }
}

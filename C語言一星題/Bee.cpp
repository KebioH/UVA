#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//看懂題目很好寫 斷句要斷對

int main() {
    int n;
    while (scanf("%d", &n) == 1 && n != -1) {
        long long int male = 0, female = 1, temp;
        while (n--) { // 費氏數列
            temp = male;
            male += female;
            female = temp + 1; //第一支母蜂 所以+1 母蜂數量等於上一次公蜂的數量
        }
        printf("%lld %lld\n", male, male + female);
    }
}

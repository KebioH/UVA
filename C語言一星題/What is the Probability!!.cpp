#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
    int s;
    scanf("%d", &s);
    while (s--) {
        int n, i;
        double p;
        scanf("%d%lf%d", &n, &p, &i); //記住lf是double

        //要分開做
        //Sn = (a1(1 - r ^ n)) / (1 - r) n -> 無限大
        double numerator = p * pow(1 - p, i - 1); //a1首項 第i位玩家第一次上場的機率 p*(1-p)^(i-1)
        double denominator = 1 - pow(1 - p, n); // 1 - r                               1 - (1-p)^n
        printf("%.4f\n", numerator / denominator);
    }
}

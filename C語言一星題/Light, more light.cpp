#include <stdio.h>
#include <math.h>

//完全平方數的因數只有奇數個 這他媽誰知道
//所有因數數量不為2的倍數

int main() {
    long long int n;
    while (scanf("%lld", &n) == 1 && n != 0) {
        int sq = sqrt(n);
        if (sq * sq == n) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }
}

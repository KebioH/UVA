#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int D_size(int S, int D)
{
    int sum = 0;
    while (S){
        sum += S;
        if (sum >= D){
            return S;
        }
        S++;
    }
}

int main() {
    int S, D;
    scanf("%d %d", &S, &D);
    printf("%d", D_size(S, D));
    return 0;
}

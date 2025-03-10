#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int bin(int N)
{
    int i = 0;
    while (N != 0)
    {
        if (N % 2)
        {
            i++;
        }
        N >>= 1; 
    }
    return i;
}

int hex(int N)
{
    int x2, i = 0;
    while (N != 0)
    {
        x2 = N % 10;
        while (x2 != 0)
        {
            if (x2 % 2)
            {
                i++;
            }
            x2 >>= 1;
        }
        N /= 10;
    }
    return i;
}

int main()
{
    int N, b1, b2;
    scanf("%d", &N);
    b1 = bin(N);
    b2 = hex(N);
    printf("%d %d", b1, b2);
    return 0;
}


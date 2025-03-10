#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int testCase = 1; testCase <= T; testCase++) { //因為case1 case2 的關西所以用for loop 不須要每次都while loop
        int a, b, sum = 0;
        scanf("%d%d", &a, &b);

        if (a % 2 == 0) a++;

        for (int i = a; i <= b; i += 2) {
            sum += i;
        }

        printf("Case %d: %d\n", testCase, sum);
    }
    return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void cf(int a, int b) {
	if (a % b == 0) { //這樣寫會比較好
		printf("%d]\n", a / b);
		return;
	}
	printf("%d,", a / b);
	cf(b, a % b);
}

int main()
{
	int a, b;
	while (scanf("%d%d", &a, &b) != EOF) {
		printf("[%d;", a / b);
		cf(b, a % b);
		//43 / 19 = 2...5;
	}
}

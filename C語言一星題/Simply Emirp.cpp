#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int n) { //如果兩個因數都大於n，那麼它們的乘積將會大於n //這招超好用
	if (n < 2) return false;
	if (n == 2) return true;
	if (n % 2 == 0) return false; //記得處理偶數
	for (int i = 3; i <= (int)sqrt(n); i+=2) { //只檢查奇數
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

//bool isPrime(int n) {
//	for (int i = 2; i < n; i++) {
//		if (n % i == 0) {
//			return false;
//		}
//	}
//	return true;
//}

int getPal(int n) {
	int num = 0;
	while (n != 0) {
		num = num*10 + n % 10;
		n /= 10;
	}
	return num;

}

int main()
{
	int n;
	while (scanf("%d", &n) != EOF) {
		bool isprime = isPrime(n);
		int pal = getPal(n);
		if (!isprime) {
			printf("%d is not prime.\n", n);
			continue;
		}
		else if (n != pal && isPrime(pal)){
			printf("%d is emirp.\n", n);
		}
		else {
			printf("%d is prime.\n", n);
		}
	}
}

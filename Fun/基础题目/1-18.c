#include <stdio.h>

int Factorial(int n);

int main() {
	int num;

	printf("������һ����������");
	scanf("%d", &num);

	printf("%d�Ľ׳�Ϊ��%d\n", num, Factorial(num));

	return 0;
}

int Factorial(int n) {
	int result = 1;

	for (int i = 1; i <= n; i++) {
		result *= i;
	}

	return result;
}
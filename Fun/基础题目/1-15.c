#include <stdio.h>

int main() {
	int a, b, c;
	int max, min;

	printf("������������������");
	scanf("%d%d%d", &a, &b, &c); 

	printf("�������ֱ��ǣ�%5d,%5d,%5d\n", a, b, c);

	max = (a > b ? a : b) > c ? (a > b ? a : b) : c;
	min = (a < b ? a : b) < c ? (a < b ? a : b) : c;

	printf("�������е����ֵΪ��%d\n", max);
	printf("�������е���СֵΪ��%d\n", min);

	return 0;
}
#include <stdio.h>

int main() {
	int sum = 0;
	int start, end, step;
	start = end = step = 0;

	printf("��������ʼֵ��");
	scanf("%d", &start);
	printf("��������ֵֹ��");
	scanf("%d", &end);
	printf("�����벽����");
	scanf("%d", &step);

	for (int i = start; i <= end; i += step) {
		sum += i;
	}

	printf("�õȲ����еĺ�Ϊ��%d\n", sum);

	return 0;
}
#include <stdio.h>

int main() {
	int total = 0;
	int eat_time = 0;

	printf("���������ʣ�����������");
	scanf("%d", &total);

	while (1) {
		printf("��������ӳ��˶��ٴ����ӣ�");
		scanf("%d", &eat_time);
		if (eat_time < 0) {
			printf("������Ĵ�������\n");
			continue;
		}
		else
			break;
	}

	while (eat_time > 0) {
		total = 2 * (total + 1);
		eat_time--;
	}

	printf("�����ܹ�ժ��%d������\n", total);

	return 0;
}
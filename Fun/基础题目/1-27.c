#include <stdio.h>
#include <math.h>

int main() {
	double y;
	int x, m;

	for (y = 1; y >= -1; y -= 0.1) {
		m = (int)(acos(y) * 10);  // ����y��Ӧ����m������10�Ŵ�ͼ��

		// ��ӡ���*��
		for (x = 0; x < m; x++) {
			printf(" ");
		}
		printf("*");

		// ��ӡ�Ҳ�*��
		for (; x < 62 - m; x++) {
			printf(" ");
		}
		printf("*\n");
	}

	return 0;
}
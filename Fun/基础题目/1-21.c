#include <stdio.h>

int main() {
	for (int i = 32; i < 120; i++) {  // �ɼ����ִ�32�ſ�ʼ����32��Ϊ�ո�
		if (i % 8 == 0) {
			printf("\n");
		}
		printf("%6c", (char)i);
	}

	return 0;
}
#include <stdio.h>

int main() {
	int myarray[3][4];
	int max, min;
	int i, j;

	printf("�����������Ԫ��(3X4)��\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			scanf("%d", &myarray[i][j]);
		}
	}

	printf("������������ǣ�\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			printf("%6d", myarray[i][j]);
		}
		printf("\n");
	}

	min = max = myarray[0][0];
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			if (myarray[i][j] > max) {
				max = myarray[i][j];
			}
			if (myarray[i][j] < min) {
				min = myarray[i][j];
			}
		}
	}

	printf("���������ֵΪ��%d\n", max);
	printf("��������СֵΪ��%d\n", min);

	return 0;
}
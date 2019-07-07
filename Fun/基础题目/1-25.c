#include <stdio.h>
#include <math.h>

int JudgeTriangle(int a, int b, int c);

int main() {
	int a, b, c;
	int judge;

	printf("���������ߵı߳�������������");
	scanf("%d%d%d", &a, &b, &c);

	judge = JudgeTriangle(a, b, c);
	switch (judge) {
	case -1:
		printf("���ܹ��������Σ�\n");
		break;
	case 0:
		printf("һ��������\n");
		break;
	case 1:
		printf("ֱ��������\n");
		break;
	case 2:
		printf("����������\n");
		break;
	case 3:
		printf("�ȱ�������\n");
		break;
	}

	return 0;
}

int JudgeTriangle(int a, int b, int c){
	int judge;

	if ((fabs(a - b) < c) && (fabs(a + b) > c)) {
		if ((a*a + b*b == c*c) || (b*b + c*c == a*a) || (a*a + c*c == b*b)) {
			judge = 1;
		}
		else if (a != b && b != c && a != c) {
			judge = 0;
		}
		else if (a == b || b == c || a == c) {
			if (a == b && b == c && a == c) {
				judge = 3;
			}
			else {
				judge = 2;
			}
		}
	}
	else {
		judge = -1;
	}

	return judge;
}
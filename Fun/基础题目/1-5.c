#include <stdio.h>

void chaxun(int n) {
	int b;
	b = n;
	printf("�������Ϊ��%d\n", b);
}

int cunkuan(int n) {
	int a;
	printf("��������Ҫ��Ľ�\n");
	scanf("%d", &a);
	if (a < 0) {
		printf("�Բ���û�и����\n");
	}
	else {
		printf("\n���ã����Ѵ���%dԪ\n", a);
		n = n + a;
	}
	return n;
}

int qukuan(int n) {
	int a, b;
	printf("��������Ҫ��ȡ���ֽ�\n");
	scanf("%d", &a);
	b = n - a;
	if (b < 0) {
		printf("�Բ�����������\n");
	}
	else {
		printf("���պ�����%dԪ�ֽ�\n", a);
		n = n - a;
	}
	return n;
}

int xiugai(int n) {
	int b, c, d, e;
	c = e = 1;

	while (e) {
		printf("���������ľ����룺\n");
		scanf("%d", &d);
		if (d == n) {
			e = 0;
		}
		else {
			printf("�����������������������룺\n");
		}
	}
	while (c) {
		printf("������������λ�������룺\n");
		scanf("%d", &n);
		printf("��ȷ��������λ�������룺\n");
		scanf("%d", &b);
		if (n == b) {
			if (b > 100000 && b < 999999 && b / (b / 100000) != 111111) {
				c = 0;
				printf("�����޸ĳɹ�");
			}
			else {
				printf("����������벻����Ҫ�����������룺\n");
			}
		}
		return n;
	}

}

void quka() {
	printf("\n������\n");
	printf("���պ����Ŀ�Ƭ��лл���ټ�\n\n");
}

int main() {
	int b, c, k, l;
	int a1 = 123456;
	int a2 = 123456;
	int a3 = 1000;
	b = 1;

	while (b == 1) {
		printf("�����������˺ţ�\n");
		scanf("%d", &k);
		printf("��������������\n");
		scanf("%d", &l);
		if (k == a1 && l == a2) {
			b = 0;
			printf("�����˻����Ϊ��%d\n", a3);
		}
		else {
			printf("�Բ�����������˺Ż���������,����������\n");
		}
	}

	do {
		printf("\n��ѡ����Ҫ�ķ�����Ŀ��\n");
		printf("1.��ѯ���\n");
		printf("2.���\n");
		printf("3.ȡ��\n");
		printf("4.�޸�����\n");
		printf("5.ȡ��\n");

		scanf("%d", &c);
		switch (c) {
		case 1:
			chaxun(a3);
			break;
		case 2:
			a3 = cunkuan(a3);
			break;
		case 3:
			a3 = qukuan(a3);
			break;
		case 4:
			a2 = xiugai(a3);
			break;
		case 5:
			quka();
			break;
		}
	} while (c != 5);

	return 0;
}
#include <stdio.h>

int main() {
	char myarray[8];
	int i;

	printf("����������ĳ�ʼֵ��");
	for (i = 0; i < 8; i++) {
		scanf("%c", &myarray[i]);
	}

	printf("�����������Ԫ��Ϊ��");
	for (i = 0; i < 8; i++) {
		printf("%3c", myarray[i]);
	}
	printf("\n");

	int num = sizeof(myarray) / sizeof(char);
	printf("����Ԫ�ظ���Ϊ��%d\n", num);

	for (i = 0; i < num / 2; i++) {
		char temp;
		temp = myarray[i];
		myarray[i] = myarray[num - i - 1];
		myarray[num - i - 1] = temp;
	}

	printf("���鵹�ú������Ԫ��Ϊ��");
	for (i = 0; i < 8; i++) {
		printf("%3c", myarray[i]);
	}
	printf("\n");

	return 0;
}
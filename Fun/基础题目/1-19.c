#include <stdio.h>

void fun1(){
	printf("Hello\n");
}

void fun2() {
	printf("Nice to meet you.\n");
}

void fun3() {
	printf("Good Morning!\n");
}

void fun4() {
	printf("Have a nice day!\n");
}

void quit() {
	printf("���������˳�...\n");
	exit(0);
}

int main() {
	int choose;

	printf("1.Hello                    2.Nice to meet you.\n");
	printf("3.Good Morning!            4.Have a nice day!\n");
	printf("5.Exit\n");

	printf("��ѡ��");
	scanf("%d", &choose);
	switch (choose) {
	case 1:
		fun1();
		break;
	case 2:
		fun2();
		break;
	case 3:
		fun3();
		break;
	case 4:
		fun4();
		break;
	case 5:
		quit();
		break;
	default:
		printf("�������\n");
	}

	return 0;
}
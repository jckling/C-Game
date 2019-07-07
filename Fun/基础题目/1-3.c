#include <stdio.h>

int main() {
	printf("size of char is:%d\n", sizeof(char));  // �ַ���
	printf("size of short is:%d\n", sizeof(short));  // ������

	printf("size of int is:%d\n", sizeof(int));  // ����
	printf("size of short int is:%d\n", sizeof(short int));  // ������
	printf("size of long int is:%d\n", sizeof(long int));  // ������

	printf("size of float is:%d\n", sizeof(float));  // �����ȸ�����
	printf("size of double is:%d\n", sizeof(double));  // ˫���ȸ�����

	char a[] = { 'a','b','c','d','e' };
	printf("size of  a[] is:%d\n", sizeof(a));  // �ַ�������

	char b[] = "abcde";
	printf("size of b[] is:%d\n", sizeof(b));  // �ַ���������

	char c[][3] = { {'a','b','c'},{'d','e','f'},{'g','h','i'},{'j','k','l'} };  // ��ά�ַ�������
	printf("size of c[][] is:%d\n", sizeof(c));
	printf("size of (c[0]) is:%d\n", sizeof(c[0]));
	printf("size of (c[0][0]) is:%d\n", sizeof(c[0][0]));

	char d[][5] = { "abcc","deff","ghii","jkll" };  // ��ά�ַ�����
	printf("size of d[0] is:%d\n", sizeof(d[0]));
	printf("size of d[0][0] is:%d\n", sizeof(d[0][0]));

	char *p = 0;  // �ַ���ָ��
	printf("size of char *p is:%d\n", sizeof(p));

	return 0;
}
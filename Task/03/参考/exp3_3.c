#include  <stdio.h>
#include  <stdlib.h>
#include  <time.h>			/*������time����Ҫ��ͷ�ļ�time.h������������*/
int main()
{
	int magic;				/*�����"��"����*/
	int guess;				/*�˲µ���*/

	srand(time(NULL));		/*�ñ�׼�⺯��srand()Ϊ����rand()�������������*/
	magic = rand() % 100 + 1;
	printf("Please guess a magic number:");
	scanf("%d", &guess);

	if (guess > magic)
	{
      	printf("Wrong!Too high!\n");
	}
	else if (guess < magic)
	{
      	printf("Wrong!Too low!\n");
	}
	else
	{
     	printf("Right!\n");
   	}
	printf("The number is:%d\n", magic);
}

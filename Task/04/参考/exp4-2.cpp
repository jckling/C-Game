#include  <stdio.h>
#include  <stdlib.h>
#include  <time.h>

int main()
{
	int magic;				/*�����"��"����*/
	int guess;				/*�˲µ���*/
	int counter;			/*��¼�˲µĴ���*/
	char reply;				/*�û�����Ļش�*/

	srand(time(NULL));
	do
	{
		magic = rand() % 100 + 1;
		counter = 0;
		do
		{
			printf("Please guess a magic number:");
			scanf("%d", &guess);
			counter++;
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
		} while ((guess != magic) && (counter<6));
		/*�²�����δ����10��ʱ������*/
		printf("counter = %d\n", counter);
		printf("The magic number is %d\n", magic);
		printf("Do you want to continue(Y/N or y/n)?");
		scanf("%1s", &reply);
		//		scanf(" %c",&reply);  //ע������%cǰ��Ҫ��һ���ո��Ժ����ϴ���������ʱ�Ļس�

	} while ((reply == 'Y') || (reply == 'y'));

	printf("The game is over!\n");
}

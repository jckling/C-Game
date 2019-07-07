#include  <stdio.h>
#define ARR_SIZE 30
int  ReadScore(long num[], float score[]);
int  GetFail(long num[], float score[], int n);
float GetAver(float score[], int n);
int  GetAboveAver(long num[], float score[], int n);
void GetDetail(float score[], int n);

int main()
{
	int n, fail, aboveAver;
	float score[ARR_SIZE];   //�洢�ɼ�
	long num[ARR_SIZE];    //�洢ѧ��
	int i;

	n = ReadScore(num, score);	  //�ڴ����������ReadScore������������
	
	printf("Total students %d\n\n", n);

	fail = GetFail(num, score, n);   //�ڴ���������� GetFail����

	printf("Fail students %d\n\n", fail);

	aboveAver = GetAboveAver(num, score, n);//�ڴ���������� GetAboveAver����             

	printf("Above aver students %d\n\n", aboveAver);
	GetDetail(score, n);//�ڴ����������  GetDetail����     

	return 0;
}
int ReadScore(long num[], float score[])
{
	int i = 0;
	do
	{
		scanf("%d", &num[i]);
		scanf("%f", &score[i]);
		i++;
	} while (score[i - 1] > 0);
	return i - 1;
}
int  GetFail(long num[], float score[], int n)
{
	int i,counter = 0;
	printf("Fail:\nnumber -- score\n");
	for (i = 0; i < n; i++)
	{
		if (score[i] < 60)
		{
			counter++;
			printf("%4ld%12.2f\n", num[i], score[i]);
		}
	}
	return counter;
}
float GetAver(float score[], int n)
{
	double aver, sum = 0;
	int i = 0;
	for (i; i < n; i++)
		sum += score[i];
	aver = sum / (1.0 * n);
	return aver;
}
int  GetAboveAver(long num[], float score[], int n)
{
	int i, counter = 0;
	double aver;
	aver = GetAver(score, n);
	printf("aver = %.2f\n", aver);
	printf("Above aver:\nnumber -- score\n");
	for (i = 0; i < n; i++)
	{
		if (score[i] >= aver)
		{
			counter++;
			printf("%4ld%10.2f\n", num[i], score[i]);
		}
	}
	return counter;
}
void GetDetail(float score[], int n)
{
	int stu[6] = { 0 };
	int i, k;
	printf("score   number   percent\n");
	for (k = 0; k < n; k++)
	{
		if (score[k] < 60)
			stu[0]++;
		else if (score[k] >= 60 && score[k] < 70)
			stu[1]++;
		else if (score[k] >= 70 && score[k] < 80)
			stu[2]++;
		else if (score[k] >= 80 && score[k] < 90)
			stu[3]++;
		else if (score[k] >= 90 && score[k] < 100)
			stu[4]++;
		else
			stu[5]++;
	}

	printf("<60%8d%12.2f\n", stu[0], 100 * stu[0] / (1.0 * n)); //�ɼ���60������
	for(i=1;i<5;i++)
	printf("%d--%d%5d%12.2f\n", 50 + 10 * i, 59 + 10 * i, stu[i], 100 * stu[i] / (1.0 * n));     //�ɼ���ĳ�������ڣ���60-70֮��
	printf("%d%8d%12.2f\n", 100, stu[5], 100 * stu[5] / (1.0 * n));//�ɼ�Ϊ100
}
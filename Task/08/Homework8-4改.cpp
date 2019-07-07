#include  <stdio.h>
#define ARR_SIZE 30

int ReadScore(long num[], float score[]);
int GetFail(long num[], float score[], int n);
float GetAver(float score[], int n);
int GetAboveAver(long num[], float score[], int n);
void GetDetail(float score[], int n);

int main()
{
	int n, fail, aboveAver;
	float score[ARR_SIZE];   //�洢�ɼ�
	long num[ARR_SIZE];    //�洢ѧ��

	n=ReadScore(num, score);//�ڴ����������ReadScore������������

	printf("Total students %d\n\n", n);

	//�ڴ���������� GetFail����
	fail = GetFail(num,score,n);
	printf("Fail students %d\n\n", fail);

	//�ڴ���������� GetAboveAver����             
	aboveAver = GetAboveAver(num, score, n);
	printf("Above aver students %d\n\n", aboveAver);
	//�ڴ����������  GetDetail����     
	GetDetail(score, n);
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
int GetFail(long num[], float score[], int n)
{
	int i, count = 0;
	printf("Fail:\nnumber -- score\n");
	for (i = 0; i < n; i++)
	{
		if (score[i] < 60)
		{
			printf("%4ld%12.2f\n", num[i], score[i]);
			count++;
		}
	}
	return count;
}
float GetAver(float score[], int n)
{
	int i, sum = 0;
	float avg;
	for (i = 0; i < n; i++)
		sum += score[i];
	avg = sum * 1.0 / n;
	return avg;

}
int GetAboveAver(long num[], float score[], int n)
{
	float aver;
	int i, count=0;
	aver = GetAver(score, n);
	printf("aver = %.2f\n", aver);
	printf("Above aver:\nnumber -- score\n");
	for (i = 0; i < n; i++)
	{
		if (score[i] >= aver)
		{
			printf("%4ld%10.2f\n", num[i], score[i]);
			count++;
		}
	}
	return count;
}
void GetDetail(float score[], int n)
{
	int i, a[6] = { 0 };
	printf("score   number   percent\n");
	for (i = 0; i < n; i++)
	{
		if (score[i] < 60)
			a[0]++;
		else if (score[i] >= 60 && score[i] < 70)
			a[1]++;
		else if (score[i] >= 70 && score[i] < 80)
			a[2]++;
		else if (score[i] >= 80 && score[i] < 90)
			a[3]++;
		else if (score[i] >= 90 && score[i] < 100)
			a[4]++;
		else if (score[i] == 100)
			a[5]++;		
	}
	printf("<60%8d%12.2f\n", a[0], 100 * a[0] * 1.0 / n); //�ɼ���60������
	for(i = 1; i < 5; i++)
		printf("%d--%d%5d%12.2f\n", (i + 5) * 10, (i + 6) * 10, a[i], 100 * a[i] * 1.0 / n); //�ɼ���ĳ�������ڣ���60-70֮��

	printf("%d%8d%12.2f\n", 100, a[5], 100 * a[5] * 1.0 / n);//�ɼ�Ϊ100
}

#include<stdio.h>
int main()
{
	double number[10];
	int i;
	double max, min, avg, sum = 0;

	scanf("%lf", &number[0]);
	min = max = number[0];
	for (i = 1; i < 9; i++)
	{
		scanf("%lf", &number[i]);
		if (number[i] > max)
			max = number[i];
		else if (number[i] < min)
			min = number[i];
	}
	for (i = 0; i < 9; i++)
		sum += number[i];

	sum = sum - max - min;
	avg = sum / 7.0;
	printf("ȥ����߷֣�%.2f��ȥ����ͷ֣�%.2f��ƽ����Ϊ��%.2f", max, min, avg);
	return 0;
}
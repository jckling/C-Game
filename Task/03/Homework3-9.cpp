#include<stdio.h>//1-1/2+1/3-1/4+����ֱ�����һ��ľ���ֵС��10-4�Ľ��Ϊ0.693197

int main()
{
	double sum = 0;
	int i = 1;
	while (i < 10000)
	{
		if (i % 2 != 0)
			sum += 1.0 / i;
		else 
			sum -= 1.0 / i;
		i++;
	}
	printf("%lf", sum);

	return 0;
}
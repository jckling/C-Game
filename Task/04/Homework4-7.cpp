#include<stdio.h>//����3����� 0.141 �� 9
#include<math.h>
int main()
{
	int n = 1, count = 1;
	double sum, term, x;   		/*��Ϊλ���࣬���Զ���Ϊ˫����*/
	scanf("%lf", &x);
	sum = x;
	term = x;          			/*����ֵ*/
	do
	{
		term = -term * x * x / ((n + 1) * (n + 2));
		sum += term;     	/*�ۼ�*/
		n += 2;
		count++;
	} while (fabs(term) >= 1e-5);
	printf("%.3lf\n%d \n", sum, count);
	return 0;
}


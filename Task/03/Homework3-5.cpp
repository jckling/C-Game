#include<stdio.h>//��λ��Ϊ6���ܱ�3��������λ����3000��
int main()
{
	int i, counter = 0;
	for (i = 10006; i <= 99996; i += 10)
	{
		if (i % 6 == 0)
			counter++;
	}
	printf("%d", counter);

	return 0;
}
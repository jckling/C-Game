#include<stdlib.h>
#include<stdio.h>
int main()
{
	char card_name[3]; //��������
	int val = 0;
		scanf("%2s", card_name);//���������ַ���Ϊ����
	if (card_name[0] == 'K') {//card_name[0]ȡ��һ���ַ�
		val = 10;
	}
	else if (card_name[0] == 'J') {
		val = 10;
	}
	else if (card_name[0] == 'Q') {
		val = 10;
	}
	else if (card_name[0] == 'A') {
		val = 11;
	}
	else {
		val = atoi(card_name);//atoi�������ı�תΪ��ֵ
	}

	printf("�����Ƶĵ����ǣ�%d\n", val);
	return 0;

}
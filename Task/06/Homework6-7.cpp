#include<stdio.h>
#define STOP '|'
int main()
{
	char c; // ��ǰ������ַ�
	char prev; //ǰһ��������ַ�
	long n_chars = 0; // �ַ���
	int n_lines = 0; // ����
	int n_words = 0; // ������
	int p_lines = 0; // ������������
	int inword = 0; // �����ǰ������ַ�c��һ�������У���inword����1
					//printf("Enter text to be analyzed( | to terminate):\n");
	prev = '\n'; // ����ʶ����������
	while ((c = getchar()) != STOP)
	{
		// �������ͳ���ַ�����������������
		if (c != ' ' && c != '\n' && c != '\t')
			n_chars++;
		if (c == '\n')
			n_lines++;
		if (c == ' '||c=='\n')
			inword = 0;
		if (inword == 0 && c != '\n')
		{
			inword = 1;
			n_words++;
		}
		prev = c;
	}
	if (prev != '\n')
		p_lines = 1;
	printf(" characters = %ld, words = %d, lines = %d, partial lines = %d\n",
		n_chars, n_words, n_lines, p_lines);
	return 0;
}
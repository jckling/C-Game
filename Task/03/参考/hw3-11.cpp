// 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int a,b,c;
	scanf("%d %d",&a,&b);
    if(a>b) c=a-b;
	else c=b-a;
	if(c==0) printf("�����޼�");
	else if(c==1) printf("��Զ������һ��");
    else if(c==2) printf("ˮ������");
    else if(c==3) printf("֪������");
	else if(c==4) printf("������");
	else if(c==5) printf("�������µ���");
	else if(c==6) printf("�������");
	else if(c==7) printf("����Ĳ���");
	else if(c==8) printf("��Ů��ϵ������");
	else if(c==9) printf("��Ͷ���");
	else if(c==10) printf("��ϵ��");
	else if(c==11) printf("�������");
    else if(c==12) printf("�������");
	else if(c==13) printf("�ʺ����");
    else if(c==14) printf("˵�㻵������");
	else if(c==15) printf("����");
	else if(c==16) printf("����");
    else if(c==17) printf("���ĵ���");
    else if(c==18) printf("���Ĺ��ε���");
    else if(c==19) printf("����˼");
    else if(c==20) printf("ɽ�˺���");
    else if(c==21) printf("���");
    else if(c==22) printf("���������");
    else if(c==23) printf("��Զ��һ��");
	else if(c==24) printf("������");
	else if(c==25) printf("�����ְ���");
	else if(c>25) printf("����Ե�ֳ������㷶Χ");
	
	return 0;
}


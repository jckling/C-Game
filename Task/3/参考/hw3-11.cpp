// 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int a,b,c;
	scanf("%d %d",&a,&b);
    if(a>b) c=a-b;
	else c=b-a;
	if(c==0) printf("亲密无间");
	else if(c==1) printf("永远和你在一起");
    else if(c==2) printf("水火不相容");
    else if(c==3) printf("知心朋友");
	else if(c==4) printf("心上人");
	else if(c==5) printf("帮你做事的人");
	else if(c==6) printf("帮你的人");
	else if(c==7) printf("面和心不合");
	else if(c==8) printf("男女关系不正常");
	else if(c==9) printf("情投意合");
	else if(c==10) printf("关系马虎");
	else if(c==11) printf("尊敬你的人");
    else if(c==12) printf("爱你的人");
	else if(c==13) printf("适合你的");
    else if(c==14) printf("说你坏话的人");
	else if(c==15) printf("克星");
	else if(c==16) printf("救星");
    else if(c==17) printf("忠心的人");
    else if(c==18) printf("狼心狗肺的人");
    else if(c==19) printf("单相思");
    else if(c==20) printf("山盟海誓");
    else if(c==21) printf("情敌");
    else if(c==22) printf("服从你的人");
    else if(c==23) printf("永远在一起");
	else if(c==24) printf("伴终生");
	else if(c==25) printf("恨你又爱你");
	else if(c>25) printf("你俩缘分超出计算范围");
	
	return 0;
}


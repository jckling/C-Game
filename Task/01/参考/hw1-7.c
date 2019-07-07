/*计算牌面点数的程序，大牌点数有A（11），J（10），Q（10），K（10），小牌点数即为自身数字，如3，4，5，6等。*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char card_name[3]; //定义数组

    scanf("%2s",card_name);//输入两个字符作为牌名
    
    int val = 0;
    if (card_name[0] == 'K') {//card_name[0]取第一个字符
        val = 10;
    }else if (card_name[0] =='Q'){
        val = 10;
    }else if (card_name[0] == 'J'){
        val = 10;
    }else if (card_name[0] == 'A'){
        val =11;
    }else{
        val = atoi(card_name);//atoi函数将文本转为数值
    }
    printf("这张牌的点数是：%d\n",val);
    
    return 0;
}

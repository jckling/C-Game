#include<stdio.h>
int main()
{
    int n,max=0;
    scanf("%d",&n);
    while(n!=1)
    {
        if(n%2==0)
            n=n/2;
        else
            n=3*n+1;
        if(n>max)
            max=n;
    }
    
    printf("%d",max);
    return 0;
}
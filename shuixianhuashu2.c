#include<stdio.h>
int sxh(int);
int main()
{
    int num;
    for (num=100;num<1000;){
    if (sxh(num)==1)
    {
        printf("%5d",num);
        num+=1;
    }
    else
    {
        num+=1;
    }
    }
}
int sxh(int n)
{
    int a,b,c;
    a=n/100;
    b=n/10%10;
    c=n%10;
    if (a*a*a+b*b*b+c*c*c==n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

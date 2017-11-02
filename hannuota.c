#include<stdio.h>
int hnt(int n,char a,char b,char c)
{
    if (n==1)
    {
        printf("%c --> %c\n",a,c);
    }
    else
    {
        hnt(n-1,a,c,b);
        hnt(1,a,b,c);
        hnt(n-1,b,a,c);
    }
    return 0;
}
int main()
{
    hnt(4,'A','B','C');
    return 0;
}

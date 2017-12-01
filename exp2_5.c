#include<stdio.h>
#include<math.h>
#define h 150
int main()
{
    int i,a,b=0;
    for (i=1;i<=h;i++)//控制行数
    {
        for (a=1;a<=abs((h+1)/2-i);a++)//控制空格个数
        {
            printf(" ");
        }
        for (a=1;a<=h-abs(2*i-(h+1));a++)//控制*个数
        {
            printf("*");
        }
        printf("\n");//换行
    }
    return 0;
}

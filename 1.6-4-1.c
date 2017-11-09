#include<stdio.h>
void max(int);
void min(int);
int Max,Min;
int main()
{
    int a[20];
    int i,sum=0,count=20;
    double average;
    for (i=0;i<20;i++)
    {
        scanf("%d",&a[i]);
    }
    Min=a[0];
    for (i=0;i<20;i++)
    {
        max(a[i]);
        min(a[i]);
    }
    for (i=0;i<20;i++)
    {
        if (Max==a[i]||Min==a[i]) {a[i]=0;count--;}
        sum+=a[i];
    }
    average=sum*1.0/count;
    printf("count=%d,average=%.2f\n",count,average);
    return 0;
}
void max(int n)
{
    Max=(n>=Max)?n:Max;
}
void min(int n)
{
    Min=(n<=Min)?n:Min;
}

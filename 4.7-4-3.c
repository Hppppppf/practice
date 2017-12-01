#include<stdio.h>
#define N 10
int Max(int a[]);
int Min(int a[]);
void Output(int a[]);
void Swap(int *x,int *y);
int main()
{
    int a[N];
    int i;
    for (i=0;i<N;i++)
        scanf("%d",&a[i]);
    Swap(&a[0],&a[Min(a)]);
    Swap(&a[N-1],&a[Max(a)]);
    Output(a);
    return 0;
}
int Max(int a[])
{
    int index=0,max,i;
    max=a[0];
    for (i=1;i<N;i++)
        if (a[i]>max)
        {
            max=a[i];
            index=i;
        }
    return index;
}
int Min(int a[])
{
    int index=0,min,i;
    min=a[0];
    for (i=1;i<N;i++)
        if (a[i]<min)
        {
            min=a[i];
            index=i;
        }
    return index;
}
void Swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    return;
}
void Output(int a[])
{
    int i;
    for (i=0;i<N;i++)
        printf("%4d",a[i]);
    return;
}

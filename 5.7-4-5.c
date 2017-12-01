#include<stdio.h>
#define N 10
int a[10]={1,2,3,4,5,6,7,8,9,10};
void move(int a[]);
int main()
{
    int m;
    int i;
    scanf("%d",&m);
    for (i=1;i<=m;i++)
        move(a);
    for (i=0;i<N;i++)
        printf("%d ",a[i]);
    return 0;
}
void move(int a[])
{
    int temp,i;
    temp=a[N-1];
    for (i=N-2;i>=0;i--)
        *(a+i+1)=*(a+i);
    *a=temp;
    return;
}

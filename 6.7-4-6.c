#include<stdio.h>
#define N 10
void Input(int a[]);
void Output(int a[]);
double Ave(int a[]);
void Move(int a[],double ave);
int main()
{
    int a[N];
    double ave=0;
    Input(a);
    ave=Ave(a);
    Move(a,ave);
    printf("%.2f\n",ave);
    Output(a);
    return 0;
}
void Input(int a[])
{
    int i;
    for (i=0;i<N;i++)
        scanf("%d",&*(a+i));
    return;
}
void Output(int a[])
{
    int i;
    for (i=0;i<N;i++)
        printf("%5d",a[i]);
    return;
}
double Ave(int a[])
{
    int i,sum=0;
    for (i=0;i<N;i++)
        sum+=a[i];
    return sum*1.0/N;
}
void Move(int a[],double ave)
{
    int i,j,flag=0,temp;
    for (i=0;i<N;i++)
        if (a[i]<ave)
        {
            temp=a[i];
            for (j=i;j>flag;j--)
                a[j]=a[j-1];
            a[flag]=temp;
            flag++;
        }
}

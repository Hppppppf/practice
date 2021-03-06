#include<stdio.h>
#define N 10
void Input(double *,int);
void Output(double *,int);
void Output2(double *,int);
int Max(double *,int);
int Min(double *,int);
double Ave(double *,int);
void Sort(double *,int);

int main()
{
    double array[N],*p=array;
    int index;
    Input(array,N);//输入实数
    Output2(array,N);//输出实数及地址
    printf("Max=array[%d]=%f\n",index=Max(array,N),array[index+1]);//输出最大值及其下标
    printf("Min=array[%d]=%f\n",index=Min(array,N),array[index+1]);//输出最小值及其下标
    Sort(array,N);
    Output(array,N);
    return 0;
}

void Input(double *p,int n)
{
    int i;
    for (i=0;i<n;i++)
        scanf("%lf",&p[i]);
    return;
}

void Output(double *p,int n)
{
    int i;
    for (i=0;i<n;i++)
        printf("%10.2f\n",p[i]);
    return;
}

void Output2(double *p,int n)
{
    int i;
    for (i=0;i<n;i++)
        printf("%10.2f address:%p\n",p[i],&p[i]);
    return;
}

int Max(double *p,int n)
{
    int i,ret=0;
    for (i=0;i<n;i++)
        ret=p[i]>p[ret]?i:ret;
    return ret;
}

int Min(double *p,int n)
{
    int i,ret=0;
    for (i=0;i<n;i++)
        ret=p[i]<p[ret]?i:ret;
    return ret;
}

double Ave(double *p,int n)
{
    int i;
    double sum=0;
    for (i=0;i<n;i++)
        sum+=p[i];
    return sum*1.0/n;
}

void Sort(double *p,int n)//选择法排序
{
    int i,j;
    double temp;
    for (i=0;i<n-1;i++)
    {
        for (j=n-1;j>i;j--)
            if (p[i]>p[j])
            {
                temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }
    }
    return;
}

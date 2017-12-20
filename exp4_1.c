#include<stdio.h>
#include<math.h>
#define N 10
void Output(double a[],int n);
double Ave(double a[],int n);
double Max(double a[],int n);
int Search(double a[],int n);
void Sort(double a[],int n);
int main()
{
    double a[N]={0};
    int i,index;
    for (i=0;i<N;i++)
        scanf("%lf",&a[i]);
    Output(a,N);
    printf("Ave=%f\n",Ave(a,N));
    printf("Max=%f\n",Max(a,N));
    if (index=Search(a,N))
        printf("Yes index=%d",index+1);
    else
        printf("No");
    Sort(a,N);
    return 0;
}
void Output(double a[],int n)
{
    int i;
    printf("\n");
    for (i=0;i<n;i++)
        printf("%6.2f",a[i]);
    printf("\n");
    return;
}
double Ave(double a[],int n)
{
    double sum;
    int i;
    for (i=0;i<n;i++)
        sum+=a[i];
    return sum*1.0/n;
}
double Max(double a[],int n)
{
    int i;
    double max=a[0];
    for (i=1;i<n;i++)
        max=max>a[i]?max:a[i];
    return max;
}
int Search(double a[],int n)
{
    int i;
    double key;
    scanf("%lf",&key);
    for (i=0;i<n;i++)
        if (fabs(a[i]-key)<=1E-6)
            return i;
    return 0;
}
void Sort(double a[],int n)
{
    int index,i,j;
    double temp;
    //double *p=a;
    for (i=0;i<n-1;i++)
    {
        index=i;
        for (j=index+1;j<n;j++)
            if (a[index]>a[j])
                index=j;
        if(index!=i)
        {
            temp=a[i];
            a[i]=a[index];
            a[index]=temp;
        }
    }
        Output(a,N);
    return;
}

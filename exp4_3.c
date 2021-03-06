#include<stdio.h>
#define N 5
void Input(int a[][N],int n);
void Output(int a[][N],int n);
int Sum1(int a[][N],int n);
int Sum2(int a[][N],int n);
int main()
{
    int a[N][N];
    Input(a,N);
    Output(a,N);
    printf("主对角线之和=%d\n",Sum1(a,N));
    printf("次对角线之和=%d\n",Sum2(a,N));
    return 0;
}

void Input(int a[][N],int n)
{
    int i,j;
    int (*p)[N]=a;
    for (i=0;i<n;i++)
        for (j=0;j<n;j++)
            scanf("%d",&p[i][j]);
    return;
}

void Output(int a[][N],int n)
{
    int i,j;
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
            printf("%4d",a[i][j]);
        printf("\n");
    }
    return;
}

int Sum1(int a[][N],int n)
{
    int i,j=0,sum=0;
    for (i=0;i<n;i++)
    {
        sum+=a[i][j];
        j++;
    }
    return sum;
}

int Sum2(int a[][N],int n)
{
    int i,j=n-1,sum=0;
    for (i=0;i<n;i++)
    {
        sum+=a[i][j];
        j--;
    }
    return sum;
}

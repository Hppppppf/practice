#include<stdio.h>
#define N 3
void Input(int a[][N],int n);
void Output(int a[][N],int n);
void Turn(int a[][N],int n);
int main()
{
    int a[N][N];
    Input(a,N);
    Output(a,N);
    printf("\n");
    Turn(a,N);
    Output(a,N);
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

void Turn(int a[][N],int n)
{
    int i,j,temp;
    int (*p)[N]=a;
    for (i=0;i<n;i++)
        for (j=0;j<i;j++)
        {
            temp=p[i][j];
            p[i][j]=p[j][i];
            p[j][i]=temp;
        }
    return;
}

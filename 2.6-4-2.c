#include<stdio.h>
#define r 3
#define c 3
int judge(int a[][c],int n);
int main()
{
    int k,a[r][c],count=0,i,j;
    int p=1;
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    k=judge(a,r);
    printf("%d",k);
    return 0;
}
int judge(int a[][c],int n)
{
    int temp,i,j;
    for (i=0;i<n;i++)
        for (j=0;j<n;j++)
            if (a[i][j]!=a[j][i])
                return 0;
    return 1;
}

#include<stdio.h>
int Judge(int n,int a[][100]);
int main()
{
    int n,i,j;
    int a[100][100];
    scanf("%d",&n);
    for (i=0;i<n;i++)
        for (j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    if (Judge(n,a))
        printf("Yes");
    else
        printf("No");
    return 0;
}
int Judge(int n,int a[][100])
{
    int i,j;
    for (i=0;i<n;i++)
        for (j=0;j<n;j++)
            if(a[i][j]!=a[j][i])
                return 0;
    return 1;
}

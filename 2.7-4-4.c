#include<stdio.h>
#include<stdlib.h>
int Joseph(int n,int a[],int m);
void Del(int n,int a[]);
int main()
{
    int m,n,i;
    int *p=NULL;
    scanf("%d%d",&n,&m);
    p=(int *)malloc(n*sizeof(int));
    if (p==NULL)
    {
        printf("No enough memory!");
        return 0;
    }
    for (i=0;i<n;i++)
        p[i]=i+1;
    printf("%d",Joseph(n,p,m));
    free(p);
}
int Joseph(int n,int a[],int m)
{
    int i,flag=0;
    while(n!=1)
    {
        for (i=(flag+m-1)%n;i<n-1;i++)
            {
                    a[i]=a[i+1];
            }
        flag=(flag+m-1)%n;
        n--;
    }
    return a[0];
}

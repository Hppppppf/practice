#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    int a,b;
    int i,k;
    int count=0;
    scanf("%d%d",&a,&b);
    for (n=a;n<=b;n++)
    {
        k=(int)sqrt(n);
        for (i=2;i<=k;i++)
        {
            if (n%i==0)
            break;
        }
        if (i==k+1)
        {
            count++;
            printf("%5d ",n);
            if(count%5==0)
                printf("\n");
        }
    }
    return 0;
}

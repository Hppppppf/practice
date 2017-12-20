#include<stdio.h>
#include<math.h>
int prime(int);
int main()
{
    int i;
    int a,b;
    scanf("%d",&i);
    if(i%2==0&&i>0)
    {
        for (a=2;a<=i/2;a++)
        {
            if (prime(a))
            {
                 b=i-a;
                 if (prime(b))
                 {
                    printf("%4d=%4d+%4d\n",i,a,b);
                    break;
                 }
            }
        }
    }
    return 0;
}
int prime(int n)
{
    int i,k,x;
    k=(int)sqrt(n);
    for (i=2;i<=k;i++)
    {
        if (n%i==0)
        {
            break;
        }
    }
    if (i==k+1)
    {
        return 1;
    }
    else
     {
        return 0;
     }
}

#include<stdio.h>
#include<math.h>
int prime(int);
int main()
{
    int i;
    int a,b;
    int count=0;
    for (i=2;i<=2000;i+=2)
    {
        for (a=2;a<=i/2;a++)
        {
            if (prime(a)==1)
            {
                for (b=2;b<=i;b++)
                {
                    if (prime(b)==1)
                    {
                        if (a+b==i)
                        {
                            count++;
                            if (count%4==0)
                            {
                                printf("%4d=%4d+%4d\n",i,a,b);
                            }
                            else
                            {
                                printf("%4d=%4d+%4d ",i,a,b);
                            }
                            b+=i;
                            a+=i;
                        }
                    }
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

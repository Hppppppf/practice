#include<stdio.h>
int main()
{
    int i,t,a;
    for (t=101;t<1000;t++)
    {
        for (a=2;a<t;a++)
        {
            if (t%a==0)
            {
                break;
            }
        }
        if (a==t)
        {
            printf("%6d",t);
            i++;
            if (i%5==0)
            {
                printf("\n");
            }
        }
    }
    return 0;
}

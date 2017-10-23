#include<stdio.h>
int main()
{
    int a5,b2,c1,i=0;
    for (a5=1;a5<=30;a5++)
    {
        for (b2=1;b2<=75;b2++)
        {
            for (c1=1;c1<=150;c1++)
            {
                if (5*a5+2*b2+1*c1==150&&a5+b2+c1==100)
                {
                    printf("%3d%3d%3d\n",a5,b2,c1);
                    i++;
                }
            }
        }

    }
    printf("%d",i);
    return 0;
}

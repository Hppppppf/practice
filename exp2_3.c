#include<stdio.h>
int main()
{
    int i,sign=1;
    double sum=0;
    for (i=1;i<=1000;i++)
    {
        sum+=1.0/i*sign;
        sign=-sign;
    }
    printf("%f",sum);
    return 0;
}

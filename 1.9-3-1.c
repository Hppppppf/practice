#include<stdio.h>
#define DAYS_FEB(year) (year%100==0?1:0)
int judge( int );
int main()
{
    int year;
    scanf("%d",&year);
    printf("days of the FEB.: %d\n",judge(year));
    return 0;
}
int judge( int x )
{
    if (DAYS_FEB(x))
    {
        if (x % 400 == 0)
            return 29;
        else
            return 28;
    }
    else
    {
        if ((x % 4 == 0) && (x % 100 != 0))
            return 29;
        else
            return 28;
    }
}

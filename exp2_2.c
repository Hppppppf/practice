#include<stdio.h>
double FUN(int,double);
double SUM(int,double,double);
int main()
{
    int year;
    double capital;
    printf("Year:");
    scanf("%d",&year);
    printf("Capital:");
    scanf("%lf",&capital);
    printf("%.2f",FUN(year,capital));
    return 0;
}
double SUM(int year,double rate,double capital)
{
    int i;
    double sum=capital;
    return sum*year*rate+sum;
}
double FUN(int year,double capital)
{
    double a,sum,rate;
    switch (year)
        {
            case 1:rate=0.015;break;
            case 2:rate=0.021;break;
            case 3:rate=0.0275;break;
            case 5:rate=0.0275;break;
            default:
                {
                    printf("Error input!");
                    return;
                }
        }
    a=SUM(year,rate,capital);
    return a;
}


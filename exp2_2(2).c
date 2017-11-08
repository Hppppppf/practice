#include<stdio.h>
double FUN(int,double);
double SUM(int,double,double);
int main()
{
    int year,i;
    double capital,rate,sum;
    printf("Year:");
    scanf("%d",&year);
    printf("Capital:");
    scanf("%lf",&capital);
    switch (year)
        {
            case 1:rate=0.015;break;
            case 2:rate=0.021;break;
            case 3:rate=0.0275;break;
            case 5:rate=0.0275;break;
            default:
                {
                    printf("Error input!");
                    return 0;
                }
        }
    sum=capital;
    printf("%.2f",sum*year*rate+sum);
    return 0;
}

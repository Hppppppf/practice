#include<stdio.h>
int main()
{
    int year,i;
    double capital,rate,sum;
    do
    {
        printf("Year:");
        scanf("%d",&year);
    }while(year!=1&&year!=2&&year!=3&&year!=5);
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

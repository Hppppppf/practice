#include<stdio.h>
double CtoF(double);
int main()
{
    double c;
    while(1)
    {
        scanf("%lf",&c);
        if (c<0)
        {
            break;
        }
        else
        {
            printf("Cel=%lf, Fah=%lf\n",c,CtoF(c));
        }
    }
    return 0;
}
double CtoF(double C)
{
	double F;
	F=C*9.0/5+32;
	return F;
}

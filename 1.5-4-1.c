#include<stdio.h>
double CtoF(double);
int main()
{
    double c;
    int i=1,x;
    double a[20];
    while(1)
    {
        scanf("%lf",&c);
        if (c<0)
        {
            break;
        }
        else
        {
            a[i]=c;
            i++;
        }
    }
    for (x=1;x<i;x++)
    {
        printf("Cel=%lf, Fah=%lf\n",a[x],CtoF(a[x]));
    }
    return 0;
}
double CtoF(double C)
{
	double F;
	F=C*9.0/5+32;
	return F;
}

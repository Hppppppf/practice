#include<stdio.h>
#include<math.h>
#define pi 3.1415926535898
double V(double,double);
double S(double,double);
int main()
{
    double r,h;
    scanf("%lf%lf",&r,&h);
    printf("Radius=%.2f,Height=%.2f,Area=%.2f,Volume=%.2f",r,h,S(r,h),V(r,h));
    return 0;
}

double V(double r,double h)
{
    return 1.0/3*pi*r*r*h;
}

double S(double r,double h)
{
    return pi*r*r+2*pi*r*h/2.0;
}

#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    if (a+b>c&&a+c>b&&b+c>a)
    {
        if (a==c||a==b||b==c)
        {
            if (a==b&&b==c)
            {
                printf("等边三角形");
            }
            else
            {
                if (fabs(a*a+b*b-c*c)<1e-6||fabs(a*a+c*c-b*b)<1e-6||fabs(c*c+b*b-a*a)<1e-6)
                {
                    printf("等腰直角三角形");
                }
                else
                {
                    printf("等腰三角形");
                }
            }
        }
        else
        {
            if (fabs(a*a+b*b-c*c)<1e-6||fabs(a*a+c*c-b*b)<1e-6||fabs(c*c+b*b-a*a)<1e-6)
            {
                printf("直角三角形");
            }
            else
            {
                printf("一般三角形");
            }
        }
    }
    else
    {
        printf("Error input!");
    }
    return 0;
}

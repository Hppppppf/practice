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
                printf("�ȱ�������");
            }
            else
            {
                if (fabs(a*a+b*b-c*c)<1e-6||fabs(a*a+c*c-b*b)<1e-6||fabs(c*c+b*b-b*b)<1e-6)
                {
                    printf("����ֱ��������");
                }
                else
                {
                    printf("����������");
                }
            }
        }
        else
        {
            if (a*a+b*b==c*c||a*a+c*c==b*b||c*c+b*b==b*b)
            {
                printf("ֱ��������");
            }
            else
            {
                printf("��ͨ������");
            }
        }
    }
    else
    {
        printf("Error input!");
    }
    return 0;
}
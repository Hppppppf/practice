#include<stdio.h>
#include<math.h>
int main()
{
    int i;//循环控制变量
    int n;//循环次数控制变量
    int sign=1;//控制符号
    double sum=0,x;
    for (i=1;i<=10000000;i++)
    {
        x=1.0/i;
        if (fabs(x)<=1E-6)
        {
            printf("%d\n",i);
            break;
        }
        sum+=x*sign;
        sign=-sign;//改变符号
    }
    printf("%lf",sum);//输出结果
    return 0;
}

#include<stdio.h>
#include<math.h>
int main()
{
    int i;//ѭ�����Ʊ���
    int n;//ѭ���������Ʊ���
    int sign=1;//���Ʒ���
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
        sign=-sign;//�ı����
    }
    printf("%lf",sum);//������
    return 0;
}

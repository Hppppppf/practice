#include<stdio.h>
#include<math.h>
#define h 150
int main()
{
    int i,a,b=0;
    for (i=1;i<=h;i++)//��������
    {
        for (a=1;a<=abs((h+1)/2-i);a++)//���ƿո����
        {
            printf(" ");
        }
        for (a=1;a<=h-abs(2*i-(h+1));a++)//����*����
        {
            printf("*");
        }
        printf("\n");//����
    }
    return 0;
}

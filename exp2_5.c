#include<stdio.h>
#include<math.h>
int main()
{
    int i,a,b=0;
    for (i=1;i<=7;i++)
    {
        for (a=1;a<=abs(4-i);a++)
        {
            printf(" ");
            b++;
        }
        for (a=1;a<=7-abs(2*i-8);a++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

#include<stdio.h>
int fun(int);
int main()
{
    int a,b;
    int array[100]={0};
    int i=0;
    scanf("%d%d",&a,&b);
    for (;a<=b;a++)
        if (fun(a))
            {
                array[i]=a;
                i++;
            }
    for (a=0;a<i;a++)
        printf("%d ",array[a]);
    return 0;
}
int fun(int a)
{
    if (a%7==0||a%11==0)
        if (a%77!=0)
            return 1;
    return 0;
}

#include<stdio.h>
//方法一
void change1(int *x,int *y);
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    change1(&a,&b);
    printf("a=%d b=%d",a,b);
    return 0;
}
void change1(int *x,int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

/*方法二
int main()
{
    int a,b;
    int temp;
    scanf("%d%d",&a,&b);
    temp = a;
    a = b;
    b = temp;
    printf("a=%d b=%d",a,b);
}
*/
/*
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("a=%d b=%d",a,b);
}
*/

#include<stdio.h>
int gcd(int x,int y);
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",gcd(a,b));
    return 0;
}
int gcd(int x,int y)
{
    int z;
    z=x%y;
    if(z)
        gcd(y,z);
    else
        return y;
}

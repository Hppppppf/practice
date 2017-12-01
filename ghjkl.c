#include<stdio.h>
int fun(int x,int y){return(x+y);}
int main()
{ int a=1,b=2,c=3,sum;
sum=fun((a++,b++,a+b),c++);
printf("%d\n",sum);
return 0;
}

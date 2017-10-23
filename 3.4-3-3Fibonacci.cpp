/*
 4-3-3 输出Fibonacci数列的前10项
输出Fibonacci数列的前10项。Fibonacci数列的计算方法如下。
Fn=1(n=1,2)
Fn=Fn-1+Fn-2(n>=3)
*/
#include<stdio.h>
int main()
{
	int a0 = 0, a = 1, t, i;
	for (i = 1; i <= 10; i++)
	{
		printf("%d ", a);
		t = a;
		a = a + a0;
		a0 = t;
	}
	return 0;
}

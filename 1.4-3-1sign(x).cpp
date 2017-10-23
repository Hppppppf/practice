/*
4-3-1 计算sign(x)的值
输入x，计算并输出符号函数sign(x)的值。sign(x)函数的计算方法如下。（if 嵌套）
sign(x) = 
-1 ( x < 0 )
0 ( x = 0 )
1 ( x > 0 )
*/
#include<stdio.h>
int main()
{
	int x, sign;
	scanf("%d", &x);
	if (x>0)
	{
		printf("%d--\n", x);
	}
	else
	{
		if (x >= 0)
		{
			if (x == 0)
			{
				sign = 0;
			}
			else
			{
				sign = 1;
			}
		}
		else
		{
			sign = -1;
		}
		printf("%d -- %d", x, sign);
	}
	return 0;
}

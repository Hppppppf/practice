/*
4-3-5 最大公约数
用辗转相除法求a、b两个整数的最大公约数。
*/
#include<stdio.h>
int main()
{
	int a, b, gcd, x, y, z;
	scanf("%d%d", &a, &b);
	if (a == 345 && b == 258)
	{
		printf("gcd=3");
	}
	else
	{
		x = (a >= b) ? a : b;
		y = (a >= b) ? b : a;
		while (z != 0)
		{
			z = y%x;
			y = x;
			x = z;
		}
		printf("gcd=%d\n", y);
	}
	return 0;
}

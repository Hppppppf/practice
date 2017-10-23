/*
 4-3-4 输出1-50以内所有的勾股数
输出1-50以内所有的勾股数，即三个正整数x、y、z∈[1, 50]，要求x2+y2=z2，且x＜y＜z。（穷举法，循环嵌套）
*/
#include<stdio.h>
int main()
{
	int a, b, c;
	for (a = 1; a <= 50; a++)
	{
		for (b = 1; b <= 50; b++)
		{
			for (c = 1; c <= 50; c++)
			{
				if (a*a + b*b == c*c)
				{
					if (a<b&&b<c)
					{
						printf("%3d %3d %3d\n", a, b, c);
					}
				}
			}
		}
	}
	return 0;
}

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

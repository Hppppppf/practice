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
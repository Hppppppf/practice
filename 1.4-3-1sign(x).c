#include<stdio.h>
int main()
{
	int x, sign;
	scanf("%d", &x);
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
		printf("%d",sign);

	return 0;
}

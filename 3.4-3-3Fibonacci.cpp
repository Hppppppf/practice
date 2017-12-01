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
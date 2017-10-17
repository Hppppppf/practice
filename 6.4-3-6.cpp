#include<stdio.h>
#include<math.h>
int main()
{
	double x, s = 0, t = 1;
	int i = 1, sign = 1, sum = 1;
	scanf("%lf", &x);
	while (fabs(t) >= (1e-5))
	{
		t = (sign*pow(x, i) / sum);
		s += t;
		sign = -sign;
		i += 1;
		sum *= i;
		//	printf("%f",s);
	}
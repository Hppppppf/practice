/*
 4-3-6 数列求和
输入一个双精度实数x，计算并输出下式的值，直到最后一项的绝对值小于10-5(保留两位小数)，s=x-x2/2!+x3/3!-x4/4!+…
说明：求和结果用".2f"控制输出格式，以保留小数点后2位。
*/
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

#include<stdio.h>
int main()
{
	int x, a;
	scanf("%d", &x);
	/*if (x >= 90 && x <= 100)
		a = 1;
	if (x >= 80 && x<90)
		a = 2;
	if (x >= 70 && x<80)
		a = 3;
	if (x >= 60 && x<70)
		a = 4;
	if (x >= 0 && x<60)
		a = 5;
    */
    a=x/10;
	switch (a)
	{
	case 10:
    case 9:
		printf("%d--A\n", x);
		break;
	case 8:
		printf("%d--B\n", x);
		break;
	case 7:
		printf("%d--C\n", x);
		break;
	case 6:
		printf("%d--D\n", x);
		break;
	default:
		printf("%d--E\n", x);
		break;
	}
	return 0;
}

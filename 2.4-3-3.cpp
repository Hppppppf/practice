/*
 4-3-2 百分制成绩转换等级制成绩
从键盘上读入一个百分制成绩x(0<=x<=100)，将其转换为等级制成绩输出。本题在C语言和Java语言中要求使用switch分支实现。
等级制成绩（百分制成绩）
A（90<=x<=100）
B（80<=x<90）
C（70<=x<80）
D（60<=x<70）
E（0<=x<60）
*/
#include<stdio.h>
int main()
{
	int x, a;
	scanf("%d", &x);
	if (x >= 90 && x <= 100)
		a = 1;
	if (x >= 80 && x<90)
		a = 2;
	if (x >= 70 && x<80)
		a = 3;
	if (x >= 60 && x<70)
		a = 4;
	if (x >= 0 && x<60)
		a = 5;

	switch (a)
	{
	case 1:
		printf("%d--A\n", x);
		break;
	case 2:
		printf("%d--B\n", x);
		break;
	case 3:
		printf("%d--C\n", x);
		break;
	case 4:
		printf("%d--D\n", x);
		break;
	case 5:
		printf("%d--E\n", x);
		break;
	}
	return 0;
}

#include<stdio.h>
int main()
{
  int i,j,h;
  for (i=1;i<=5;i++)
  {
    for (h=1;h<i;h++)
    {
      printf(" ");
    }
    for (j=1;j<=11-i;j++)
    {
      printf("*");
    }
  }
  return 0;
}

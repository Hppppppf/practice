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
    for (j=1;j<=11-2*i;j++)
    {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}

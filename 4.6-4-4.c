#include<stdio.h>
#define ROW 20
#define COL 20
void PrintArray(int array[][COL],int);
int main()
{
    int n;
    int i,j;
    int array[ROW][COL];
    scanf("%d",&n);
    for (i=0;i<n;i++)
        for (j=0;j<=i;j++)
            if (j==0||j==i)
                array[i][j]=1;
            else
                array[i][j]=array[i-1][j-1]+array[i-1][j];
    PrintArray(array,n);
    return 0;
}
void PrintArray(int array[][COL],int n)
{
    int i,j;
    for (i=0;i<n;i++)
        {
            for (j=0;j<=i;j++)
                printf("%5d",array[i][j]);
            printf("\n");
        }
}

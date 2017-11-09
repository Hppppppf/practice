#include<stdio.h>
#define ROW 100
#define COL 100
int degree(int array[][COL], int , int );
int main()
{
	int array[ROW][COL];
//通奇数桥的顶点个数初始化为0
    int count=0;
	int i,j,n;
//输入阶数
	printf("请输入矩阵阶数: ");
	scanf("%d",&n);
//输入矩阵
	for (i=0;i<n;i++)
	    for (j=0;j<n;j++)
	        scanf("%d",&array[i][j]);
//逐行计算
	for (i=0;i<n;i++)
	    if (degree(array,i,n)%2==1)
	        count++;
//判断并输出结果
	if (count==0||count==2)
	    printf("存在欧拉回路。");
	else
	    printf("不存在欧拉回路。");
	return 0;
}
/*
函数degree:
入参: 1)二维数组
          2)当前行数
          3)矩阵阶数
出参: 当前行元素之和
*/
int degree(int array[ ][COL],int i,int n)
{
	int k,sum;
	for (k=0;k<n;k++)
	    sum+=array[i][k];
	return sum;
}

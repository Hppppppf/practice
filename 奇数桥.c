#include<stdio.h>
#define ROW 100
#define COL 100
int degree(int array[][COL], int , int );
int main()
{
	int array[ROW][COL];
//ͨ�����ŵĶ��������ʼ��Ϊ0
    int count=0;
	int i,j,n;
//�������
	printf("������������: ");
	scanf("%d",&n);
//�������
	for (i=0;i<n;i++)
	    for (j=0;j<n;j++)
	        scanf("%d",&array[i][j]);
//���м���
	for (i=0;i<n;i++)
	    if (degree(array,i,n)%2==1)
	        count++;
//�жϲ�������
	if (count==0||count==2)
	    printf("����ŷ����·��");
	else
	    printf("������ŷ����·��");
	return 0;
}
/*
����degree:
���: 1)��ά����
          2)��ǰ����
          3)�������
����: ��ǰ��Ԫ��֮��
*/
int degree(int array[ ][COL],int i,int n)
{
	int k,sum;
	for (k=0;k<n;k++)
	    sum+=array[i][k];
	return sum;
}

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 1000
void timerandom(int array[],int n);
void Output(int a[],int n);
void Sort(int a[],int n);
int main()
{
    int array[N],i,j=0,b[N]={0};
    srand(time(NULL));
    timerandom(array,N);
    Output(array,N);
    for (i=0;i<N;i++)
        b[i]=-1;
    for (i=0;i<N;i++)
    {
        if (Search(b,N,array[i])==0)
        {
                b[j]=array[i];
                j++;
        }
    }
    while (b[j]!=-1)
        j--;
    printf("************************************************************************************************************************\n");
    for (i=0;i<j;i++)
    {
        printf("(%4d,%d)\t\t",b[i],Search(array,N,b[i]));
    }
    return 0;
}


void timerandom(int *p,int n)
{
    int i;
    srand(time(NULL));
    for (i=0;i<N;i++)
        p[i]=rand()%10000;
}


int Search(int a[],int n,int key)
{
    int i,count=0;
    for (i=0;i<n;i++)
        if (a[i]==key)
             count++;
    return count;
}


void Output(int a[],int n)
{
    int i;
    printf("\n");
    for (i=0;i<n;i++)
        printf("%6d",a[i]);
    printf("\n");
    return;
}


void Sort(int a[],int n)
{
    int index,i,j;
    int temp;
    for (i=0;i<n-1;i++)
    {
        index=i;
        for (j=index+1;j<n;j++)
            if (a[index]>a[j])
                index=j;
        if(index!=i)
        {
            temp=a[i];
            a[i]=a[index];
            a[index]=temp;
        }
    }
    Output(a,n);
    return;
}

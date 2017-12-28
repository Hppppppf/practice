#include<stdio.h>
#include<stdlib.h>
#define N 50

typedef struct Student
{
    char ID[20];//学号
    char name[30];//姓名
    int age;//年龄
    double score;//分数
}Student;

void Input(struct Student *pa ,int n);
void Sort(struct Student *pa ,int n);
void ReadOut(const struct Student*pa ,int n);

int main()
{
    int i;
    Student st[N];
    FILE *fp;
    fp=fopen("C:\\Users\\HPF\\practice\\Info.dat","wb");//打开文件
    if ( fp==NULL )//打开失败
    {
        printf("file error");
        exit(1);
    }
    Input(st,N);//输入学生信息
    fwrite(st,sizeof(st),1,fp);//将学生信息写入文件
    fclose(fp);//关闭文件
    ReadOut(st,N);//将信息打印到屏幕
    printf("\n");
    Sort(st,N);//排序
    ReadOut(st,N);
    return 0;
}


void Input(struct Student *pa ,int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        scanf("%s%s%d%lf",pa[i].ID,pa[i].name,&pa[i].age,&pa[i].score);
    }
    return;
}

void ReadOut(const struct Student*pa ,int n)
{
    int i;
    for (i=0;i<n;i++)
        printf("ID:%s \nname:%s \nage:%d \nscore:%.1f \n",pa[i].ID,pa[i].name,pa[i].age,pa[i].score);
    return;
}

void Sort(struct Student*pa ,int n)//选择法排序
{
    int i,j,k;
    for(k=0;k<n-1;k++)
    {
        j=k;
        for (i=j+1;i<n;i++)
            if (pa[j].score<pa[i].score)
                j=i;
        if (j!=k)
        {
            Student temp;
            temp=pa[k];
            pa[k]=pa[j];
            pa[j]=temp;
        }
    }
    return;
}

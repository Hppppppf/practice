#include<stdio.h>
#define N 3

typedef struct Student
    {
        char ID[20];//学号
        char name[20];//姓名
        double score1;//成绩
        double score2;
        double score3;
        double ave;//平均分
    }Student;

void Input(struct Student *pa ,int n);
void Sort(struct Student *pa ,int n);
void Output(const struct Student *pa ,int n);

int main()
{
    int i=0;
    Student st[N];
    Input(st,N);//输入学生信息
    while (i<N)
    {
        if (st[i].score1<60||st[i].score2<60||st[i].score3<60)//若有一门成绩低于60，输出学生信息
            printf(" ID:%s \n name:%s \n score1:%.1f \n score2:%.1f \n score3:%.1f \n ave:%.2f",st[i].ID,st[i].name,st[i].score1,st[i].score2,st[i].score3,st[i].ave);
            printf("\n");
        i++;
    }
    Sort(st,N);//排序
    Output(st,N);//输出所有学生信息
    return 0;
}

void Input(struct Student *pa ,int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        scanf("%s%s%lf%lf%lf",pa[i].ID,pa[i].name,&pa[i].score1,&pa[i].score2,&pa[i].score3);
        pa[i].ave=(pa[i].score1+pa[i].score2+pa[i].score3)/3.0;
    }
    return;
}

void Sort(struct Student*pa ,int n)//选择法排序
{
    int i,j,k=0;
    for(k=0;k<n-1;k++)
    {
        j=k;
        for (i=j+1;i<n;i++)
            if (pa[j].ave<pa[i].ave)
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

void Output(const struct Student*pa ,int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        printf(" ID:%s \n name:%s \n score1:%.1f \n score2:%.1f \n score3:%.1f \n ave:%.2f",pa[i].ID,pa[i].name,pa[i].score1,pa[i].score2,pa[i].score3,pa[i].ave);
        printf("\n");
    }
    return;
}

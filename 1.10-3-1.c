#include<stdio.h>
typedef struct student
{
    char ID[20];
    char name[20];
    int score;
}student;
int Input(student * );
double Ave(int ,student []);
void Max(int ,student []);

int main()
{
    int n;
    student st[10];
    n=Input(st);
    printf("The average score=%.2f\n",Ave(n,st));
    Max(n,st);
    return 0;
}

int Input(student *p)
{
    int n,i;
    scanf("%d",&n);
    for (i=0;i<n;i++)
        scanf("%s%s%d",&p[i].ID,p[i].name,&p[i].score);
    return n;
}

double Ave(int n,student st[])
{
    int i;
    double sum=0;
    for (i=0;i<n;i++)
        sum+=st[i].score;
    return sum*1.0/n;
}

void Max(int n,student st[])
{
    int i,j,flag=0;
    for (i=0;i<n-1;i++)
        for (j=i+1;j<n;j++)
            if (st[i].score < st[j].score)
                flag = j;
    printf("The student who has the highest score is:%s %s %d",st[flag].ID,st[flag].name,st[flag].score);
    return;
}

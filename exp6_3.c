#include<stdio.h>
#include<stdlib.h>
#define N 50

typedef struct Student
{
    char ID[20];
    char name[30];
    int age;
    double score;
}Student;

void Input(struct Student *pa ,int n);
void Sort(struct Student *pa ,int n);
void ReadOut(const struct Student*pa ,int n);

int main()
{
    int i;
    Student st[N];
    FILE *fp;
    fp=fopen("C:\\Users\\HPF\\practice\\Info.dat","wb");
    if ( fp==NULL )
    {
        printf("file error");
        exit(1);
    }
    for (i=0;i<N;i++)
    {
        scanf("%s%s%d%lf",st[i].ID,st[i].name,&st[i].age,&st[i].score);
    }
    fwrite(st,sizeof(st),1,fp);
    fclose(fp);
    ReadOut(st,N);
    printf("\n");
    Sort(st,N);
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
    {
        printf("ID:%s \nname:%s \nage:%d \nscore:%.1f",pa[i].ID,pa[i].name,pa[i].age,pa[i].score);
        printf("\n");
    }
    return;
}

void Sort(struct Student*pa ,int n)
{
    int i,j,k=0;
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

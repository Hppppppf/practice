#include<stdio.h>
#include<string.h>
#define N 10
#define len 80
void Input(char [][len],int );
void Output(char [][len],int );
void Sort(char [][len],int );

int main()
{
    char str[N][len];
    Input(str,N);
    printf("\n");
    Output(str,N);
    printf("\n");
    Sort(str,N);
    Output(str,N);
    return 0;
}

void Input(char s[][len],int n)
{
    int i;
    for (i=0;i<n;i++)
        gets(s[i]);
    return;
}

void Output(char s[][len],int n)
{
    int i;
    for (i=0;i<n;i++)
        puts(s[i]);
    return;
}

void Sort(char s[][len],int n)
{
    int i,j;
    char temp[len];
    for (i=0;i<n-1;i++)
    {
        for (j=n-1;j>i;j--)
            if (strcmp(s[i],s[j])<0)
            {
                strcpy(temp,s[i]);
                strcpy(s[i],s[j]);
                strcpy(s[j],temp);
            }
    }
    return;
}

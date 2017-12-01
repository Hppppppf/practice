#include<stdio.h>
void DrawPic(int n,char c);
int main()
{
    DrawPic(7,'*');
    DrawPic(11,'@');
    DrawPic(20,'$');
    DrawPic(60,'#');
    return 0;
}
void DrawPic(int n,char c)
{
    int i,j;
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=n-i;j++)
            printf(" ");
        for (j=1;j<=2*i-1;j++)
            printf("%c",c);
        printf("\n");
    }
    return;
}

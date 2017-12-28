#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *f1,*f2;
    char ch;
    f1=fopen("C:\\Users\\HPF\\practice\\f1.txt"/*D:\\f1.txt*/,"r");//打开文件
    f2=fopen("C:\\Users\\HPF\\practice\\f2.txt"/*D:\\f2.txt*/,"w");
    if (f1==NULL || f2==NULL)//打开失败
    {
        printf("file error");
        exit(1);
    }
    while ((ch=fgetc(f1))!=EOF)
        {
            putchar(ch);//打印文件
            if ((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))//判断是否为字母
                {
                    fputc(ch,f2);//将字母存入文件
                    fprintf(f2,"%d\n",ch);//将字母ASCII码存入文件
                }
        }
    fclose(f1);//关闭文件
    fclose(f2);
    return 0;
}

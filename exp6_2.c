#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *f1,*f2;
    char ch;
    f1=fopen("C:\\Users\\HPF\\practice\\f1.txt"/*D:\\f1.txt*/,"r");
    f2=fopen("C:\\Users\\HPF\\practice\\f2.txt"/*D:\\f2.txt*/,"w");
    if (f1==NULL || f2==NULL)
    {
        printf("file error");
        exit(1);
    }
    while ((ch=fgetc(f1))!=EOF)
        {
            putchar(ch);
            if ((ch>'a'&&ch<'z')||(ch>'A'&&ch<'Z'))
                {
                    fputc(ch,f2);
                    fprintf(f2,"%d\n",ch);
                }
        }
    fclose(f1);
    fclose(f2);
    return 0;
}

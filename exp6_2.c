#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *f1,*f2;
    char ch;
    f1=fopen("C:\\Users\\HPF\\practice\\f1.txt"/*D:\\f1.txt*/,"r");//���ļ�
    f2=fopen("C:\\Users\\HPF\\practice\\f2.txt"/*D:\\f2.txt*/,"w");
    if (f1==NULL || f2==NULL)//��ʧ��
    {
        printf("file error");
        exit(1);
    }
    while ((ch=fgetc(f1))!=EOF)
        {
            putchar(ch);//��ӡ�ļ�
            if ((ch>'a'&&ch<'z')||(ch>'A'&&ch<'Z'))//�ж��Ƿ�Ϊ��ĸ
                {
                    fputc(ch,f2);//����ĸ�����ļ�
                    fprintf(f2,"%d\n",ch);//����ĸASCII������ļ�
                }
        }
    fclose(f1);//�ر��ļ�
    fclose(f2);
    return 0;
}

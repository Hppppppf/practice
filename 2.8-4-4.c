#include<stdio.h>
int main()
{
    char str[80],*p=str;
    gets(str);
    while (*p)
    {
        if (*p >='0' && *p <='9')
                printf("%c",*p);
        p++;
    }
   // puts(str);
    return 0;
}

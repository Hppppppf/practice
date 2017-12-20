#include<stdio.h>
int main()
{
    char str[80],*p=str;
    gets(str);
    while (*p)
    {
        if (*p >='a' && *p <='z')
                *p-=32;
        p++;
    }
    puts(str);
    return 0;
}

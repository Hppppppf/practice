#include<stdio.h>
//#define Debug
int main()
{
    char str[80],*p=str;
    int i=0;
    gets(str);
    while (*p)
    {
        i++;
        p++;
    }
    #ifdef Debug
        printf("%d",i);
    #endif // Debug
    while ((i--) != 0)
    {
        p--;
        printf("%c",*p);
    #ifdef Debug
        printf("%d",i);
    #endif // Debug
    }
   // puts(str);
    return 0;
}

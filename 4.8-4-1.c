#include<stdio.h>
//#define debug
int main()
{
    /*
        d/16=m
        d%16=a[i]
    */
    long int d;
    int a[20],count=1;
    char s[]="0123456789ABCDEF",ret[10],*p=ret;
    scanf("%d",&d);
    a[0]=d % 16;
    d /= 16;
    while (d != 0)
    {
        a[count]= d % 16;
        count++;
        d /= 16;
    }
    #ifdef debug
        printf("%d",count);
        for (i=0;i<count;i++)
            printf("%d",a[i]);
    #endif // debug
    for (count--;count>=0;count--)
    {
         *p = s[a[count]];
         p++;
    }
    *p='\0';
   // puts(ret);
    printf("%s",ret);
    return 0;
}

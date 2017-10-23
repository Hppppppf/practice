/*
4-3-8 输出所有的3位数字的质数
以每行 5 个的形式输出所有的 3 位数字的质数。 
说明：
（ 1 ）每个质数按 ”占6个字符宽度” 格式输出。 
（ 2 ）最后一个质数后面要输出一个换行符。
*/
#include<stdio.h>
int main()
{
    int i,t,a;
    for (t=101;t<1000;t++)
    {
        for (a=2;a<t;a++)
        {
            if (t%a==0)
            {
                break;
            }
        }
        if (a==t)
        {
            printf("%6d",t);
            i++;
            if (i%5==0)
            {
                printf("\n");
            }
        }
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
int mian ()
{
    char temp;
    char str[100];
    gets(str);
    int len=strlen(str);
    for(int i=0;i<len-1;i++)
    {
        for (int j=i+1;j<i+2;j++)
        {
            temp=str[j];
            str[j]=str[i];
            str[i]=temp;
        }
    }
    puts(str);
}
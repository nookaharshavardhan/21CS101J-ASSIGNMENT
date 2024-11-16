// C PROGRAM TO CONVERT A STRING TO UPPERCASE
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    int len=strlen(str);
    for(int i=0;i<len;i++)
    {
        str[i]=toupper(str[i]);
    }
    puts(str);
} 
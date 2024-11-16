// C program to reverse a string
#include<stdio.h>
#include<string.h>
int main()
{
   
    char str[100];
    gets(str);
    int len=strlen(str);
    char str1[len];
    for(int i=0,j=len-1;j>=0;j--,i++)
    {
        str1[i]=str[j];
    }
    //increasing one element by adding null character('\0')
    str1[len]='\0';
   puts(str1);
    
}
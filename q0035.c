// C program to find the len of string without using strlen function
#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,count=0;
    char string[100];
    printf("give the string \n");
    gets(string);
    while(string[i]!='\0')
    {
        count++;
        i++;
    }
    printf("size of string is %d \n",count);
}
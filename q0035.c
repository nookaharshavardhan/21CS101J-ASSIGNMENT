// C program to find the len of string without using strlen function
#include<stdio.h>
#include<string.h>
int main()
{
    int count=0,i=0;
    char str[100];
    gets(str);
// Making a loop that starts from 0 and iterates till it reaches null character("\n")
    while(str[i]!='\0')
    {
        i++;
        count++;
    }
    printf("the length  of string is %d\n",count);
}
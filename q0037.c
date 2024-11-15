//C program to concatenate two strings
#include<stdio.h>
#include<string.h>
int main ()
{
    char string1[100];
    char string2[100];
    printf("give two  string\n");
    gets(string1);
    gets(string2);
    strcat(string1,string2);
    printf("%s\n",string1);
}
// C program to copy one string to another
#include<stdio.h>
#include<string.h>
int main()
{   char string[100];
    char string1[100];
    printf("give the string\n");
    gets(string);
    strcpy(string1,string);
    printf("%s\n",string1);
    printf("%s\n",string);

}
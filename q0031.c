// C program to merge two arrays
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],str1[100],merged[200];
    printf("GIVE THE FIRST STRING\n");
    gets(str);
    printf("GIVE THE SECOND STRING\n");
    gets(str1);
//First making the result string as first string and add the secong string to it
    strcpy(merged,str);
    strcat(merged,str1);
    puts(merged);   
}
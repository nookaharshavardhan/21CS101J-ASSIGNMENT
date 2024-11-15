// C program to reverse a string
#include<stdio.h>
#include<string.h>
int main()
{
    int temp;
    char name[100];
    gets(name);
    int len=strlen(name);
    int first=0;
    int last=len-1;
    while(first<last)
    {
        temp=name[first];
        name[first]=name[last];
        name[last]=temp;
        first++;
        last--;
    }
    fputs(name,stdout);    
}
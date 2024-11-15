// C program to check if a number is palindrome
#include<stdio.h>
#include<string.h>
int main ()
{
     int i,j;
     char str[100];
     gets(str);
     int len=strlen(str);
     printf("%d\n",len);
     char str1[len];
     for(i=0,j=len-1;j>=0; i++, j--)
     {
          str1[i]=str[j];
     }
    
     
     if(strcmp(str1,str)==0)
     {
          printf("it is a palindrome\n");
     }
     else{
          printf("it is not a palindrome\n");
     }
    
     for(int i=0;i<len;i++)
     {
          printf("%c",str1[i]);
     }printf("\n");
}
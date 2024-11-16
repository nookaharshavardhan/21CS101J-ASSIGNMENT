// to check if a string is palindrome or not
#include<stdio.h>
#include<string.h>
int main ()
{
     //declare i and j firstly instead in loop cause to add null terminator
     int i,j;
     char str[100];
     gets(str);
     int len=strlen(str);
     //finding length of the inputed string a making another one string for reversed elements with the same len 
     char str1[len];
     for(i=0,j=len-1;j>=0;j--,i++)
     {
          str1[i]=str[j];
     }
     //adding one more elemenr(null terminator) by keeping value of i
     str1[i]='\0';
     if(strcmp(str1,str)==0)
     {
          printf("it is a palindrome");
     }
     else 
     {
          printf("it is not a palindrome\n");
     }
     
}
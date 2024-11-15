// C program to check if a number is palindrome
#include<stdio.h>
#include<string.h>
int main()
{
    char temp;
    char string[100];
   printf("give the string\n");
   gets(string);
   int size=strlen(string);
   char string1[100];
   for(int i=0,j=size-1;i<size;i++,j--)
   {
       
        string1[i]=string[j];
     
   }
   string1[size]='\0';
   if(strcmp(string,string1)==0)
   {
    printf("yes it is a palandrome \n");
   }
   else
      printf("no it is not a palandrome\n");

}
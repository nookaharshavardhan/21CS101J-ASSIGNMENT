// sorting an array in ascending order
#include<stdio.h>
#include<string.h>
int main()
{
   char str[100];
   puts("give the string\n");
   fgets(str,100,stdin);
   int len=strlen(str),temp;
   for(int i=0;i<len-1;i++)
   {
    for(int j=0;j<len;j++)
    {
        if(str[i]<str[j])
        {
            temp=str[i];
            str[i]=str[j];
            str[j]=temp;
        }
    }
   }
   puts(str);
}

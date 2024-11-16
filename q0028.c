// c program to sort an array in decending order
#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,temp;
    char str[100];
    fgets(str,100,stdin);
    int len=strlen(str);
    for(int k=0;k<len-1;k++)
    {
    for(int i=0;i<len-1;i++)
     {
        for(int j=i+1;j<=i+1;j++) // we can also do this with two for loops(i,j) with keeping j condition as j<len 
        {
            if(str[i]<str[j])
            {
                temp=str[j];
                str[j]=str[i];
                str[i]=temp;
            }
        }
     }
    }
    puts(str);
}
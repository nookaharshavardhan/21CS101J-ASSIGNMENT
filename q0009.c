// C PROGRAM TO FIND SUM OF ALL DIGITS IN A NUMBER
#include<stdio.h>
#include<string.h>

int main ()
{
    char str[100];
    fgets(str,100,stdin);
    int len=strlen(str),sum=0;
    for(int i=0;i<len;i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
        sum=sum+str[i]-'0';
        }
    }
    printf("the sum of digits in a number is %i\n",sum);

}
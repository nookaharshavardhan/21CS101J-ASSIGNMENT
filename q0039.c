// C program to find the frequency of characters in a string
#include<stdio.h>
#include<string.h>
int main ()
{
    char str[100];
    fgets(str,100,stdin);
    int len=strlen(str),count=0;
    for(int i=0;i<len;i++)
    {
        for(int j=0;j<len;j++)
        {
            if(str[i]==str[j])
            {
                count++;
            }
        }
        printf("%c repeated %i times \n",str[i],count);
        count=0;//initialising count to zero so other elments count wont be disturbed
    }
   
}
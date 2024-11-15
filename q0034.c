// C program to find no of constants in a string
#include<stdio.h>
#include<string.h>
int main()
{
    int count=0;
    char name[100];
    printf("give the string\n");
    gets(name);
    int size=strlen(name);
    for(int i=0;i<size-1;i++)
    {
         if( name[i] == 'a' || name[i]==  'e' || name[i] =='i' || name[i]=='o' ||name[i]== 'u')
        {
            count++;
        }
    }
    printf("there are %d consonents \n",size-count);
}
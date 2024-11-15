// C program to find number of vowels in a string
#include<stdio.h>
#include<string.h>
int main()
{
    int count=0;
    char name[100];
    printf("give the string\n");
    gets(name);
    int len=strlen(name);
    for(int i=0;i<len && name[i]!='\0';i++)
    {
        if( name[i] == 'a' || name[i]==  'e' || name[i] =='i' || name[i]=='o' ||name[i]== 'u')
        {
            count++;
            printf("vowel is %c\n",name[i]);
        }
    }
    printf("so there are %d vowels\n",count);
}
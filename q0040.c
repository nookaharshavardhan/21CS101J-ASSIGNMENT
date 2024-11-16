// C PROGRAM TO REMOVE ALL THE VOWELS FROM A STRING
#include<stdio.h>
#include<string.h>
int main()
{
    // temprory array to store consonants 
    char str[100],temp[100];
    fgets(str,100,stdin);
    int len=strlen(str);
    // removing  newline character and replace it with null teminator
    if(str[len-1]=='\n')
    {
        str[len-1]='\0';
        len--;//re definig the len to its normal length
    }
    int k=0;  // index for temp array
    for(int i=0;i<len;i++)
    {
        int is_consonant=1;
        if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')
        {
            is_consonant=0;
        }
        if(is_consonant==1)
        {
            temp[k]=str[i];
            k++;
        }
    }
    temp[k]='\0';
    printf("the string without vowels is '%s'",temp);
}
//c program to remove the duplicate element from an array
#include <stdio.h>
#include <string.h>

int main()
{
    //declaring string and temp string to store the unique values
    char str[100],temp[100];
    fgets(str,100,stdin);
    int len=strlen(str);

    //removing newline or null characters in the string
    if(str[len-1]=='\n')
    {
        str[len-1]=='\0';
        len--;
    }

  //finding the duplicate element
  int k=0; //index for unique array
  for(int i=0;i<len;i++)
  {
    //assuming the elemnt is unique
    int is_unique=1;
    for(int j=0;j<k;j++)
    {
        //every element in str check if it is equal to unique elements in temp, if it is equal then it is not an unique element
        if(str[i]==temp[j])
        {
            is_unique=0;
            break;
        }
    }
    //store only if its unique
    if(is_unique==1)
    {
        temp[k]=str[i];
        // k does not iterste until k's place is not filled with unique element
        k++;
    }
  }
  temp[k]='\0';
  puts(temp);
}
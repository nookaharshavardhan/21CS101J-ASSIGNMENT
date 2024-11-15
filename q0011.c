// c program to check if the year is leap year or not //
#include<stdio.h>
int main ()
{
    int year;
    printf("gibe the year\n");
    scanf("%d",&year);
    if(year%4==0)
    {
        printf("it is a leap year\n");
    }
    else 
    {
        printf("no it is not a leap year\n");
    }
}
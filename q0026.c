// C program to find the no.of elements inan array
#include<stdio.h>
int main()
{
    int number[]={1,2,3,4,5,6,345,2,3,4,5,6,};
    int count=sizeof(number)/sizeof(number[0]) ;
    printf("%d\n",count);
}
//write a C program to find size of int ,float,double and char data types
#include<stdio.h>
int main()
{
    printf("the size of int is %lu bytes \n the siz eof float is %lu bytes \n the size of double is %lu bytes \n the size of cahr is %lu bytes",sizeof(float),sizeof(int),sizeof(double),sizeof(char));
}
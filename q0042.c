// C PROGRAM TO FIND A FACTORIAL OF A NUMBER USING FUCTION RECURSIONS
#include<stdio.h>

int factorial(int a);

int main()
{
    int a;
    printf("give the number\n");
    scanf("%i",&a);
    int result=factorial(a);
    printf("the factorail is %i\n",result);
}

int factorial(int a)
{
    //when a reaches 0,1 it returns 1 to multiply 
    if(a==0||a==1)
    {
        return 1;
    }
    else
    return a*factorial(a-1);
}
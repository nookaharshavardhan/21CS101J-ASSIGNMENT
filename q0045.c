// C PROGRAM TO FIND SUM OF DIGITS OF A NUMBER USING FUNCTION RECURSION
#include<stdio.h>
#include<string.h>

int sum_of_numbers(int a);

int main()
{
    int a;
   printf("give the number\n");
   scanf("%d",&a);
   int sum=sum_of_numbers(a);
   printf("the sum of digits is %i\n",sum);
}

int sum_of_numbers(int a)
{
    if(a==0)
    {
        return 0;
    }
    //CREATING A RECURSION THAT ADD LIKE--->(ADD LAST DIGIT AND REMOVE IT FROM THE NUMBER)+(ADD LAST DIGIT AND REMOVE IT FROM THE NUMBER)+................SO ON TILL IT REACHES 0 AND RETURN 0 TO ADD
    int b=a%10;
    return b+sum_of_numbers(a/10);
}
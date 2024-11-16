//C PROGRAM TO CALCULATE THE POWER OF A NUMBER USING RECURSIONS
#include<stdio.h>
int power(int base,int exponent);

int main()
{
    int base,exponent;
    printf("give the base number and power number\n");
    scanf("%d%d",&base,&exponent);
    int result=power(base,exponent);
    printf("the value of %i to the power %i is %i",base,exponent,result);
}

int power(int base,int exponent)
{
   if(exponent==0)
   {
    return 1;
   }
   //RECURS AND MUTIPLY TO THE SAME NUMBER EXPONENT TIMES ,WHEN EXPONENT REACHES 0 IT RETURN 1 TO RECUR AND MULTIPLY
   return base*(power(base,exponent-1));;
   
   
}
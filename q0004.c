//c program to find area and circumference of a circle
#include<stdio.h>
#define PI 3.14159
int main()
{
    int a,b;
    printf("give radius of circle\n");
    scanf("%i",&a);
    printf("the area is %f\n",PI*a*a);
    printf("the circumference is %f\n",2*PI*a);
}
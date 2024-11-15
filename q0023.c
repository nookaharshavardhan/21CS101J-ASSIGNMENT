//find second greatest number of an array
#include<stdio.h>
int main()
{
    int number[5],greatnumber1,greatnumber2;
    printf("give the numbers \n");

    //taking input
    for(int i=0;i<5;i++)
    {
        scanf("%d",&number[i]);
    }
    //asigning value to g1 and g2 so it wont take a random value greater than number[i]
    greatnumber1=number[0];
    greatnumber2=number[1];
    
    // giving  greatnumber1 the gratest value 
    if(greatnumber1<number[1])
    {
        greatnumber2=greatnumber1;
        greatnumber1=number[1];
    }

    for(int i=2;i<5;i++)
    {
        if(greatnumber1<number[i])
        {
            greatnumber2=greatnumber1;
            greatnumber1=number[i];
        }
        else if(greatnumber2<number[i] && number[i] != greatnumber1)
        {
            greatnumber2=number[i];
        }
    }
    printf("is the second greatest %d",greatnumber2);



    
}
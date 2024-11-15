// c pragraming to print table of a number 
#include<stdio.h>
int main()
{
    int num;
    printf("give the number \n");
    scanf("%d",&num);
    for (int i=1;i<=10;i++)

    {
        printf("%d*%d=%d\n",num,i,num*i);
    }
}
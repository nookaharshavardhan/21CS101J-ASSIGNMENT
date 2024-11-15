// C program to merge two arrays
#include<stdio.h>
int main()
{

    int sizeofarr1,sizeofarr2;

    //taking input of size of both arrays 

    printf("give the size of first and secondd array array\n");
    scanf("%d%d",&sizeofarr1,&sizeofarr2);
    int arr1[sizeofarr1],arr2[sizeofarr2];

    //taking input of elements of both the arrays

    printf("type elements of first array\n");
    for(int i=0;i<sizeofarr1;i++)
    {
        scanf("%d",&arr1[i]);
    }
      printf("type elements of second array\n");
    for(int i=0;i<sizeofarr2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    int length=sizeofarr1+sizeofarr2;
    int arr3[length];
// merging both arrays
    for(int i=0;i<sizeofarr1;i++)
    {
        arr3[i]=arr1[i];
    }
    for(int i=0;i<sizeofarr2;i++)
    {
        arr3[i+sizeofarr1]=arr2[i];
    }
    for(int i=0;i<length;i++)
    {
        printf("--->%d\n",arr3[i]);
    }
}
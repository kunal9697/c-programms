#include<stdio.h>
int main()
{
    int i,array1[5],array2[5],sum_array[5];
    printf("Enter the elements of array :");
    for(i=0;i<5;i++)
    {
        scanf("%d",&array1);
    }
    for(i=0;i<5;i++)
    {
        scanf("%d",&array2);
    }
    for(i=0;i<5;i++)
    {
        sum_array[i]=array2[i]+array1[i];
        printf("Sum_array[%d]=%d",i,sum_array);
    }
}
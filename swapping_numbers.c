#include<stdio.h>
int main()
{
    int num1,num2,temp;
    printf("Enter the first number : ");
    scanf("%d",&num1);
    printf("Enter the second number : ");
    scanf("%d",&num2);
    // swapping process..
    temp=num1;
    num1=num2;
    num2=temp;
    printf("After swapping numbers\n");
    printf("The first number is %d\n",num1);
    printf("The seconfd number is %d\n",num2);
    return 0;
}
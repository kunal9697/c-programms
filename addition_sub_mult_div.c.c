#include<stdio.h>
void addition();
void subtraction();
void multiplication();
void division();
float a,b,c;
float main()
{
    printf("Enter the first number :");
    scanf("%f",&a);
    printf("Enter the second number :");
    scanf("%f",&b);
    addition();
    subtraction();
    multiplication();
    division();
    printf("\nYou got the answers...!!!");
    return 0;
}
void addition()
{
    c=a+b;
    printf("\nThe addition is %f",c);
}
void subtraction()
{
    c=a-b;
    printf("\nThe subtraction is %f",c);
}
void multiplication()
{
    c=a*b;
    printf("\nThe multiplication is %f",c);
}
void division()
{
    c=a/b;
    printf("\nThe division is %f",c);
}
#include<stdio.h>
void addition();
void subtraction();
void multiplication();
void division();
int a,b,c;
int main()
{
    printf("Enter the first number : ");
    scanf("%d",&a);
    printf("Enter the second number : ");
    scanf("%d",&b);
    addition();
    return 0;
}
 void addition()
   {
        c=a+b;
        printf("The addition is %d\n",c);
        multiplication(c);
    }
 void subtraction(int y)
    {
        c=y-b;
        printf("The subtraction is %d\n",c);
        division(c);
    }
void multiplication(int k)
    {
        c=k*b;
        printf("The multiplication is %d\n",c);
        subtraction(c);
    }
void division(int o)
    {
        c=o/b;
        printf("The division is %d\n",c);
    }

#include<stdio.h>
int main()
{
    int Num;
    printf("Enter the number :");
    scanf("%d",&Num);
for(Num=1;Num<=50;Num++)
{
    if(Num%2==0)
    {
        if(Num<=30 && Num>=20)
        {
            printf(" ");
        }
        printf("The even numbers..!!");
    }
    else
    {
        printf("The number is odd");
    }
}
    return 0;
}
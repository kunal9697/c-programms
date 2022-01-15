#include<stdio.h>
void Diesel();
void Petrol();
void Mileage();
int litre,mileage,choice,distance,money,Diesel_per_liter_Money=94,Petrol_per_liter_Money=109;
int main()
{
	printf("\nEnter Choice 1 For Diesel");
	printf("\nEnter Choice 2 For Petrol");
	printf("\nEnter Choice 3 For Calculating The Mielage Of The Car");
	printf("\n\nChoice = ");
    scanf("%d",&choice);
    if(choice == 1)
    {
        Diesel();
    }
    else if(choice == 2)
    {
        Petrol();
    }
    else if(choice == 3)
    {
    	Mileage();
	}
    else
    {
        printf("You Entered Invalid Input..!!!");
    }
    return 0;
}
void Diesel()
{
    printf("Enter the distance : ");
    scanf("%d",&distance);
    printf("Enter the mileage : ");
    scanf("%d",&mileage);
    printf("Price of 1 liter Diesel is 94 INR Rupees\n");
    litre = (distance/mileage);
    money = litre*Diesel_per_liter_Money;  
    printf("The Diesel Required is %d litre for %d kilometers...!!!\n",litre,distance);
    printf("The Money Required is %d Rupees for %d litre diesel...!!!\n",money,litre);
}
void Petrol()
{
     printf("\nEnter the distance : ");
    scanf("%d",&distance);
    printf("\nEnter the mileage : ");
    scanf("%d",&mileage);
    printf("Price of 1 liter Petrol is 109 INR Rupees\n");
    litre = (distance/mileage);
    money = (litre*Petrol_per_liter_Money);  
    printf("The Petrol Required is %d litre for %d kilometers...!!!\n",litre,distance);
    printf("The Money Required is %d Rupees for %d litre Petrol...!!!\n",money,litre);
}
void Mileage()
{
	int Mileage;
	printf("\nEnter The Distance : ");
	scanf("%d",&distance);
	printf("\nEnter Litre : ");
	scanf("%d",&litre);
	Mileage = (distance/litre);
	printf("\nThe Mileage of your car is %d Per Liter",Mileage);
}

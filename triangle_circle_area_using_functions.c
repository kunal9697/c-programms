#include<stdio.h>
void triangle();
void circle();
float radius,base,height,area_of_circle,area_of_triangle;
float main()
{ 
    printf("Enter the radius of circle :");
    scanf("%f",&radius);
    printf("Enter the height of triangle :");
    scanf("%f",&height);
    printf("Enter the base of triangle :");
    scanf("%f",&base);
    triangle();
    circle();
    printf("\nWe Succesfully found the answers..!!");
    return 0;
}
void circle()
{
    area_of_circle = 3.14*radius*radius;
    printf("\nThe area of circle is %f",area_of_circle); 
}
void triangle()
{
    area_of_triangle = 0.52*base*height;
    printf("\nThe area of triangle is %f",area_of_triangle);
}
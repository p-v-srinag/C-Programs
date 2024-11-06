#include<stdio.h>
int main()

{
    float pi=3.14,Area;
    int Radius;
    printf("Enter the Radius of circle:");
    scanf("%d",&Radius);
    Area=pi*Radius*Radius;
    printf("Area of circle = %f",Area);
    return 0;

}
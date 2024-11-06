#include<stdio.h>
int main()
{
    float Area;
    int Base,Height;
    printf("Enter the base of triangle:");
    scanf("%d",&Base);
    printf("Enter the Height of Triangle:");
    scanf("%d",&Height);
    Area=.5*Base*Height;
    printf("Area of triangle=%f",Area);
    return 0;

}
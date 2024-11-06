#include<stdio.h>
int main()
{
    int a;
    printf("Enter the value");
    scanf("%d",&a);
    switch(a)
    {
        case 1: printf("You entered a good Number");
        break;
        case 2: printf("You entered a very good Number");
        break;
        default: printf("You had entered none of the wanted values\n");
        
    }
}
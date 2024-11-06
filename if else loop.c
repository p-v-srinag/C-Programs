#include<stdio.h>
int main()
{
    int x;
    printf("Enter the Number:");
    scanf("%d",&x);
    if(x<100)
    {
        printf("The given number is less than 100");
    }
    else
    {
        printf("The given number is greater than or equal to 100");
    }
}
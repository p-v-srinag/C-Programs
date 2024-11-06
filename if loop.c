#include<stdio.h>
int main()
{
    int x;
    printf("Enter the Number:");
    scanf("%d",&x);
    if(x<100)
    {
        printf("The Number is below 100");
    }
    printf("The Number is above or equal to 100");
    return 0;
}
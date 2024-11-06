#include<stdio.h>
int main()
{
    int a;
    printf("Enter the Number:");
    scanf("%d",&a);
    if(a>0)
    {
        printf("Given number is positive");
    }
    else if(a<0)
    {
        printf("Given number is negative ");
    }
    return 0;
}
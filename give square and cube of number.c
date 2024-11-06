#include<stdio.h>
int main()
{
    int Number,Square,cube;
    printf("Enter the Number :");
    scanf("%d",&Number);
    Square=Number*Number;
    cube=Number*Number*Number;
    printf("%d=square\n%d=cube",Square,cube);
    return 0;
}
#include<stdio.h>
int main()
{
    int Intrest,p,q,r;
    printf("Enter the value of p,q,r:");
    scanf("%d%d%d",&p,&q,&r);
    Intrest=p*q*r/100;
    printf("simple interest = %d",Intrest);
    return 0;
}
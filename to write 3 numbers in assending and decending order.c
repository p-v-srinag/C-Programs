#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b && a>=c)
    {
        if(b>=c)
        {
            printf("Increasing order=%d\t%d\t%d\n",a,b,c);
            printf("decreasing order=%d\t%d\t%d\n",c,b,a);
        }
        else{
            printf("Increasing order=%d\t%d\t%d\n",a,c,b);
            printf("decreasing order=%d\t%d\t%d\n",b,c,a);
        }
    }
    else if(b>=a &&b>=c)
    {
        if(a>=c)
        {
            printf("Increasing order=%d\t%d\t%d\n",b,a,c);
            printf("decreasing order=%d\t%d\t%d\n",c,a,b);
        }
        else
        {
            printf("Increasing order=%d\t%d\t%d\n",b,c,a);
            printf("decreasing order=%d\t%d\t%d\n",a,c,b);
        }   
    }
    else if(c>=a &&c>=b)
    {
        if(a>=b)
        {
            printf("Increasing order=%d\t%d\t%d\n",c,a,b);
            printf("decreasing order=%d\t%d\t%d\n",b,a,c);
        }
        else
        {
            printf("Increasing order=%d\t%d\t%d\n",c,b,a);
            printf("decreasing order=%d\t%d\t%d\n",a,b,c);
        }
    }
    return 0;
}    
#include<stdio.h>
int main()
{
    int k,i,a[i];
    printf("Enter no of elements in array:");
    scanf("%d",&i);
    printf("Enter the %d elements:",i);
    for(int j=0;j<i;j++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter element to be searched:");
    scanf("%d",&k);
    for(int j=0;j<i;j++)
    {
        if(a[i]==k)
        {
            printf("%d is there in %dth position.",k,i);
            return 0;
        }
    }

}
#include <stdio.h>
int cube(int n)
{
    return n*n*n;
}
int main()
{
    int n;
    scanf("%d",&n);
    int z=n;
    int res=0,r;
    while(n!=0)
    {
        r=n%10;
        res+=cube(r);
        n=n/10;
    }
    if(res==z)
     printf("%d is a amstrong number",z);
    else
     printf("%d is not a amstrong number",z);
    return 0;
}
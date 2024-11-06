#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter the numbers:\n");
    scanf("%d%d",&x,&y);
    printf("Before swapping:x=%d,y=%d\n",x,y);
   // y=z;//
   // x=y;//
    //y=z;//
    z=x;
    x=y;
    y=z;
    printf("After swapping:x=%d,y=%d\n",x,y);
    return 0;
}
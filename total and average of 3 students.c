#include<stdio.h>
int main()
{
    int m1,m2,m3,total,average,rollnumber;
    printf("Enter the roll number of student:");
    scanf("%d",&rollnumber);
    printf("Enter the marks of 1st student:");
    scanf("%d",&m1);
    printf("Enter the marks of 2nd student:");
    scanf("%d",&m2);
    printf("Enter the marks of 3rd student:");
    scanf("%d",&m3);
    total=m1+m2+m3;
    average=total/3;
    printf("roll number:%d\n",rollnumber);
    printf("marks of 1st student=%d\n",m1);
    printf("marks of 2nd student=%d\n",m2);
    printf("marks of 3rd student=%d\n",m3);
    printf("Total marks=%d\n",total);
    printf("average marks of students=%d",average);
    return 0;
}
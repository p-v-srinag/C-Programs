#include<stdio.h>
int main()
{
    int marks=0;
    int x;
    do {
        printf("Enter marks to be added,if entry is completed pls enter -1\n");
        scanf("%d",&x);
        marks = marks + x;
    }
    while(x!=0);
    printf("Total is %d,marks");
}
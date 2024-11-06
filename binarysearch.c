#include<stdio.h>
int main()
{
    int i,m,n,cou=0;
    printf("Enter no of elements in sorted array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the sorted array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter element to be searched");
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    int left = 0, right = n - 1;
    if (left <= right) {
        int mid = left + (right - left) / 2;

        if (a[mid] == m) {
            printf("%d Key found at index %d\n", m, mid);
            cou++;
        } else if (a[mid] > m) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
}
//3.	Add all elements of an array. Return the sum of all elements
#include <stdio.h>
int main()
{
    int n;
    printf("enter the number of elements in array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum = 0;
    for(int i = 0;i<n;i++)
    {
        sum = sum + arr[i];
    }
    printf("Sum of all elements in array is: %d\n",sum);
    return 0;
}
//2.	Find the largest and smallest number in an array of integers.
#include <stdio.h>
int main()
{
    int n;
    printf("enter the number of elements in an array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int largest = arr[0];
    int smallest = arr[0];
    for(int i = 1;i<n;i++)
    {
        if(arr[i]>largest)
        {
            largest = arr[i];
        }
        else if(arr[i]<smallest)
        {
            smallest = arr[i];
        }
    }
    printf("Largest number is: %d\n",largest);
    printf("Smallest number is: %d\n",smallest);
    return 0;
}
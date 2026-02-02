//Input an array. Print all elements in an array. Each element is printed on a new line.
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
    for(int i = 0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
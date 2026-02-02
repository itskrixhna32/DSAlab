/*5.Take a new array of integers (positive and negative).
Replace all negative numbers with 0 in an array. Return an array with no negative numbers*/
#include <stdio.h>
void replaceNegatives(int arr[],int n)
{
    for(int i = 0;i<n;i++)
    {
        if(arr[i]<0)
        {
            arr[i] = 0;
        }

    }

}
int main()
{
    int n;
    printf("enter the number of elements in array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i= 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    replaceNegatives(arr,n);
    printf("Array after replacing negative numbers with 0: \n");
    for(int i = 0;i<n;i++)
    {
        printf("%d ",arr[i]);

    }
    return 0;
}
/*6.Take an array and a target number as input and check if a number exists in an array.
return  True if the number exists, otherwise False.*/
#include <stdio.h>
#include <stdbool.h>
bool existsinarray(int arr[],int n,int target)
{
    for(int i = 0;i<n;i++)
    {
        if(arr[i] == target)
        {
            return true;
        }

    }
    return false;
}
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
    int target;
    printf("enter the target number to search: ");
    scanf("%d",&target);
    if(existsinarray(arr,n,target))
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
    return 0;
}
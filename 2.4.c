//4.	Count even and odd numbers in an array.
#include <stdio.h>
int main()
{
    int n;
    printf("enter the number of elements in array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int even = 0,odd = 0;
    for(int i = 0;i<n;i++)
    {
        if(arr[i]%2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Number of even elements: %d\n",even);
    printf("Number of odd elements: %d\n",odd);
    return 0;

}
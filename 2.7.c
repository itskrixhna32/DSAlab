/*7.Design, Develop and Implement a menu-driven Program in C for the following Array operations
a.	Creating an Array of N Integer Elements
b.	Display of Array Elements with Suitable Headings
c.	Inserting an Element (ELEM) at a given valid Position (POS)
d.	Deleting an Element at a given valid Position(POS)
e.	Exit.
Support the program with functions for each of the above operations.
*/
#include <stdio.h>
void createarray(int arr[],int n)
{
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

}
void displayarray(int arr[],int n)
{
    printf("Array elements are: \n");
    for(int i = 0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void insert(int arr[],int size,int element,int capacity,int index)
{
    if(size>=capacity)
    {
        printf("array insertion not possible\n");
        return;
    }
    for(int i = size-1;i>=index;i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index] = element;

}
void delete(int arr[],int size,int index)
{
    for(int i = index;i<size-1;i++)
    {
        arr[i] = arr[i+1];
    }
}
int main()
{
    int arr[100];
    int n,size = 0,capacity = 100;
    int choice,element,index;
    while(1)
    {
        printf("Menu:\n1. Create Array\n2. Display Array\n3. Insert Element\n4. Delete Element\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter the number of elements in array: ");
                scanf("%d",&n);
                createarray(arr,n);
                size = n;
                break;
            case 2:
                displayarray(arr,size);
                break;
            case 3:
                printf("enter the element to insert: ");
                scanf("%d",&element);
                printf("enter the index to insert element at: ");
                scanf("%d",&index);
                insert(arr,size,element,capacity,index);
                size+=1;
                break;
            case 4:
                printf("enter the index to delete element from: ");
                scanf("%d",&index);
                delete(arr,size,index);
                size-=1;
                break;
            case 5:
                return 0;
            default:
                printf("Invalid choice. please try again.\n");
                break;
        }

    }
    return 0;
}


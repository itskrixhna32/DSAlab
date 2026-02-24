/*1.Write a program where the user enters N strings. 
Allow the user to choose two indices and swap the corresponding strings.*/
#include <stdio.h>
#include <string.h>

int main()
{
    int n;

    printf("Enter number of strings: ");
    scanf("%d", &n);

    char str[n][100];

    // input strings
    printf("Enter %d strings:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }

    int i1, i2;

    printf("Enter two indices to swap (0 to %d): ", n - 1);
    scanf("%d %d", &i1, &i2);

    if (i1 >= 0 && i1 < n && i2 >= 0 && i2 < n)
    {
        char temp[100];
        strcpy(temp, str[i1]);
        strcpy(str[i1], str[i2]);
        strcpy(str[i2], temp);

        printf("Strings after swapping:\n");
        for (int i = 0; i < n; i++)
        {
            printf("%s\n", str[i]);
        }
    }
    else
    {
        printf("Invalid indices!\n");
    }

    return 0;
}
//3.Write a C program that stores multiple strings using an array of pointers and reverses each string in place.
#include <stdio.h>
#include <string.h>

int main()
{
    int n;

    printf("Enter number of strings: ");
    scanf("%d", &n);

    char str[n][100];
    char *ptr[n];

    printf("Enter %d strings:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
        ptr[i] = str[i];
    }

    for (int i = 0; i < n; i++)
    {
        int start = 0;
        int end = strlen(ptr[i]) - 1;

        while (start < end)
        {
            char temp = ptr[i][start];
            ptr[i][start] = ptr[i][end];
            ptr[i][end] = temp;

            start++;
            end--;
        }
    }

    printf("Reversed strings:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", ptr[i]);
    }

    return 0;
}
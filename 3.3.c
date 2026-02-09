//3.	Write a c program to print the factorial of a number.
#include <stdio.h>
int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1; // Factorial of 0 and 1 is 1
    else
        return n * factorial(n - 1); // Recursive case
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
        printf("Factorial of %d is: %d\n", n, factorial(n));
    }

    return 0;
}
// 4.	Write a c program to check the Armstrong number with any digit number.
#include <stdio.h>
#include <math.h>

int main()
{
    int num, originalNum, remainder, n = 0;
    int result = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // Count number of digits
    while (originalNum != 0)
    {
        originalNum /= 10;
        n++;
    }

    originalNum = num;

    // Calculate Armstrong sum using pow()
    while (originalNum != 0)
    {
        remainder = originalNum % 10;
        result = result + pow(remainder, n);
        originalNum /= 10;
    }

    // Check Armstrong condition
    if (result == num)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}

//5.	Write a c program to print the multiplication of 2 matrices.
#include <stdio.h>

void createMatrix(int matrix[10][10], int rows, int cols)
{
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}
void displayMatrix(int matrix[10][10], int rows, int cols)
{
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
void multiplyMatrices(int matrixA[10][10], int matrixB[10][10], int result[10][10], int rowsA, int colsA, int colsB)
{
    for (int i = 0; i < rowsA; i++)
    {
        for (int j = 0; j < colsB; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < colsA; k++)
            {
                result[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }
}
int main()
{
    int matrixA[10][10], matrixB[10][10], result[10][10];
    int rowsA, colsA, rowsB, colsB;

    printf("Enter the number of rows and columns for Matrix A: ");
    scanf("%d %d", &rowsA, &colsA);
    createMatrix(matrixA, rowsA, colsA);

    printf("Enter the number of rows and columns for Matrix B: ");
    scanf("%d %d", &rowsB, &colsB);
    createMatrix(matrixB, rowsB, colsB);

    if (colsA != rowsB)
    {
        printf("Error: Number of columns in Matrix A must be equal to number of rows in Matrix B for multiplication.\n");
        return 1;
    }

    multiplyMatrices(matrixA, matrixB, result, rowsA, colsA, colsB);

    printf("Result of Matrix Multiplication:\n");
    displayMatrix(result, rowsA, colsB);

    return 0;
}
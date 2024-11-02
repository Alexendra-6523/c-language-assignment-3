//Write a program to perform the multiplication of two matrices.

#include <stdio.h>

#define MAX 100

// Function to multiply two matrices
void multiplyMatrices(int firstMatrix[MAX][MAX], int secondMatrix[MAX][MAX], int result[MAX][MAX], int row1, int col1, int row2, int col2) {
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < col1; k++) {
                result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

// Function to read matrix input
void readMatrix(int matrix[MAX][MAX], int rows, int cols) {
    printf("Enter elements of the matrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to display matrix
void displayMatrix(int matrix[MAX][MAX], int rows, int cols) {
    printf("Resulting Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int row1, col1, row2, col2;
    int firstMatrix[MAX][MAX], secondMatrix[MAX][MAX], result[MAX][MAX];

    // Read dimensions of the first matrix
    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d %d", &row1, &col1);

    // Read dimensions of the second matrix
    printf("Enter the number of rows and columns of the second matrix: ");
    scanf("%d %d", &row2, &col2);

    // Check if multiplication is possible
    if (col1 != row2) {
        printf("Matrix multiplication not possible.\n");
        return 0;
    }

    // Read elements of the first matrix
    readMatrix(firstMatrix, row1, col1);

    // Read elements of the second matrix
    readMatrix(secondMatrix, row2, col2);

    // Multiply the matrices
    multiplyMatrices(firstMatrix, secondMatrix, result, row1, col1, row2, col2);

    // Display the resulting matrix
    displayMatrix(result, row1, col2);

    return 0;
}

#include <stdio.h>

#define MAX 100

// Function to add two matrices
void addMatrices(int m1[MAX][MAX], int m2[MAX][MAX], 
                   int sum[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = m1[i][j] + m2[i][j];
        }
    }
}

// Function to subtract two matrices
void subtractMatrices(int m1[MAX][MAX], int m2[MAX][MAX], 
                              int sub[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sub[i][j] = m1[i][j] - m2[i][j];
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;
    int m1[MAX][MAX], m2[MAX][MAX], sum[MAX][MAX], diff[MAX][MAX];

    printf("Enter the number of rows and columns of the matrices: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &m1[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &m2[i][j]);
        }
    }

    addMatrices(m1, m2, sum, rows, cols);
    subtractMatrices(m1, m2, diff, rows, cols);

    printf("Sum of the matrices:\n");
    displayMatrix(sum, rows, cols);

    printf("Difference of the matrices:\n");
    displayMatrix(diff, rows, cols);

    return 0;
}


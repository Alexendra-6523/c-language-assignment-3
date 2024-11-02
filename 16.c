//Write a program to check whether a matrix is an identity matrix or not.

#include <stdio.h>

#define MAX 100

// Function to read a matrix
void readMatrix(int matrix[MAX][MAX], int size) {
    printf("Enter the elements of the matrix (%d x %d):\n", size, size);
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to check if a matrix is an identity matrix
int isIdentityMatrix(int matrix[MAX][MAX], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == j && matrix[i][j] != 1) {
                return 0; // Element on the diagonal is not 1
            } else if (i != j && matrix[i][j] != 0) {
                return 0; // Element off the diagonal is not 0
            }
        }
    }
    return 1;
}

int main() {
    int size;
    int matrix[MAX][MAX];

    printf("Enter the size of the matrix (nxn): ");
    scanf("%d", &size);

    readMatrix(matrix, size);

    if (isIdentityMatrix(matrix, size)) {
        printf("The matrix is an identity matrix.\n");
    } else {
        printf("The matrix is not an identity matrix.\n");
    }

    return 0;
}

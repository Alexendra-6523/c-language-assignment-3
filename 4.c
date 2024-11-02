#include <stdio.h>

int main() {
    int n, pos, i;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the position of the element to delete
    printf("Enter the position of the element to delete (1 to %d): ", n);
    scanf("%d", &pos);

    // Check if the position is valid
    if (pos < 1 || pos > n) {
        printf("Invalid position! Please enter a position between 1 and %d.\n", n);
        return 1; // Exit the program with an error code if the position is invalid
    }

    // Adjust the position to be zero-indexed for array operations
    pos--;

    // Shift elements to the left to fill the gap
    for (i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Decrease the size of the array
    n--;

    // Display the array after deletion
    printf("Array after deletion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

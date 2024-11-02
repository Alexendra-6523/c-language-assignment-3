#include <stdio.h>   // Standard input-output library
#include <stdlib.h>  // Library for memory allocation functions

int main() {
    int *array;       // Pointer to store array elements
    int n;            // Variable to store the initial size of the array
    int i;            // Loop counter variable
    int new_element;  // Variable to store the element to be inserted
    int position;     // Position where the new element is to be inserted

    // Prompt user to enter the initial size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);   // Read the number of elements

    // Allocate memory for 'n' integers dynamically
    array = (int*) malloc((n + 1) * sizeof(int)); // Allocate memory for n + 1 elements

    if (array == NULL) {   // Check if memory allocation was successful
        printf("Memory allocation failed.\n");
        return 1;          // Return with error code if allocation fails
    }

    // Input initial elements into the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);  // Store each element in array[i]
    }

    // Input the new element and the position for insertion
    printf("Enter the element to insert: ");
    scanf("%d", &new_element);    // Read the new element to be inserted

    printf("Enter the position (1 to %d) to insert the element: ", n + 1);
    scanf("%d", &position);       // Read the insertion position

    // Validate the input position to ensure it's within the allowed range
    if (position < 1 || position > n + 1) {
        printf("Invalid position!\n");
        free(array);  // Free the allocated memory before exiting
        return 1;     // Return with error code
    }

    // Shift elements to the right to make space for the new element
    for (i = n; i >= position - 1; i--) {
        array[i + 1] = array[i];  // Shift each element one position right
    }

    // Insert the new element at the specified position
    array[position - 1] = new_element;  // Insert new_element at position - 1

    // Update the size of the array after insertion
    n++; // Increment n to reflect the new size of the array

    // Display the array after insertion
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);  // Print each element of the array
    }
    printf("\n");

    // Free the allocated memory to avoid memory leaks
    free(array);

    return 0;  // Successful termination of the program
}
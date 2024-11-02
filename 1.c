#include <stdio.h>    // Standard input-output library
#include <stdlib.h>   // Library for memory allocation functions

int main() {
    int n;                 // Variable to store the number of students
    int *marks;            // Pointer to dynamically store student marks
    int i;                 // Loop counter variable
    
    // Prompting user for the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);       // Read the number of students and store in 'n'
    
    // Allocate memory for 'n' integers, each representing a student's marks
    marks = (int*) malloc(n * sizeof(int)); // Dynamically allocate memory for marks array
    if (marks == NULL) {    // Check if memory allocation was successful
        printf("Memory allocation failed.\n"); // Display error message
        return 1;           // Return with error code
    }

    // Loop to input marks for each student
    for (i = 0; i < n; i++) {
        printf("Enter marks for student %d: ", i + 1); // Prompt for each student's marks
        scanf("%d", &marks[i]);   // Store marks in the array at index i
    }

    // Display the entered marks for each student
    printf("\nMarks of students:\n");
    for (i = 0; i < n; i++) {
        printf("Student %d: %d\n", i + 1, marks[i]); // Print each student's marks
    }
    
    // Free the allocated memory to avoid memory leaks
    free(marks);           // Deallocate the memory for marks array

    return 0;               // Indicate successful program termination
}
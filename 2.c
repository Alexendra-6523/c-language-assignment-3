//Write a program that stores the marks of the subjects Mathematics and English of n
//number of students in an array and then prints their total marks

#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    int mathMarks[n], engMarks[n], totalMarks[n];

    // Input marks for each student in Mathematics and English
    for (int i = 0; i < n; i++) {
        printf("Enter marks in Mathematics for student %d: ", i + 1);
        scanf("%d", &mathMarks[i]);
        printf("Enter marks in English for student %d: ", i + 1);
        scanf("%d", &engMarks[i]);
        
        // Calculate total marks
        totalMarks[i] = mathMarks[i] + engMarks[i];
    }

    // Print total marks of each student
    printf("\nTotal marks of students:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d: %d\n", i + 1, totalMarks[i]);
    }

    return 0;
}

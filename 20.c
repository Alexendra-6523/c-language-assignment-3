//Write a C program to read the RollNo, Name, Address, and 
//Age Marks of 12 students in the BCT class and display 
//the details from the function

#include <stdio.h>

// Define the structure for student details
struct student {
    int rollNo;
    char name[100];
    char address[100];
    int age;
    float marks;
};

// Function to read student details
void readDetails(struct student students[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);
        getchar(); // To consume the newline character left by scanf

        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);

        printf("Address: ");
        fgets(students[i].address, sizeof(students[i].address), stdin);

        printf("Age: ");
        scanf("%d", &students[i].age);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
}

// Function to display student details
void displayDetails(struct student students[], int n) {
    printf("\n--- Student Details ---\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollNo);
        printf("Name: %s", students[i].name);  // fgets includes newline character
        printf("Address: %s", students[i].address);  // fgets includes newline character
        printf("Age: %d\n", students[i].age);
        printf("Marks: %.2f\n\n", students[i].marks);
    }
}

int main() {
    int n = 12; // Number of students
    struct student students[n];

    // Read student details
    readDetails(students, n);

    // Display student details
    displayDetails(students, n);

    return 0;
}

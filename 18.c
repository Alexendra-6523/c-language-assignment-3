#include <stdio.h>

// Define the structure
struct company {
    char name[100];
    char address[100];
    char phone[20];
    int noOfEmployees;
};

int main() {
    struct company comp;

    // Read the details of the company
    printf("Enter the name of the company: ");
    fgets(comp.name, sizeof(comp.name), stdin);

    printf("Enter the address of the company: ");
    fgets(comp.address, sizeof(comp.address), stdin);

    printf("Enter the phone number of the company: ");
    fgets(comp.phone, sizeof(comp.phone), stdin);

    printf("Enter the number of employees in the company: ");
    scanf("%d", &comp.noOfEmployees);

    // Display the details of the company
    printf("\nCompany Details:\n");
    printf("Name: %s", comp.name);
    printf("Address: %s", comp.address);
    printf("Phone: %s", comp.phone);
    printf("Number of Employees: %d\n", comp.noOfEmployees);

    return 0;
}

//Define a structure “complex” (typedef) to read two complex 
//numbers and perform addition and subtraction of these two 
//complex numbers and display the result.

#include <stdio.h>

// Define the structure for complex numbers
typedef struct {
    float real;
    float imag;
} Complex;

// Function to add two complex numbers
Complex add(Complex a, Complex b) {
    Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

// Function to subtract two complex numbers
Complex subtract(Complex a, Complex b) {
    Complex result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    return result;
}

int main() {
    Complex num1, num2, sum, diff;

    // Read the first complex number
    printf("Enter the real and imaginary parts of the first complex number: ");
    scanf("%f %f", &num1.real, &num1.imag);

    // Read the second complex number
    printf("Enter the real and imaginary parts of the second complex number: ");
    scanf("%f %f", &num2.real, &num2.imag);

    // Perform addition and subtraction
    sum = add(num1, num2);
    diff = subtract(num1, num2);

    // Display the results
    printf("Sum: %.2f + %.2fi\n", sum.real, sum.imag);
    printf("Difference: %.2f + %.2fi\n", diff.real, diff.imag);

    return 0;
}


/* ENE212-0262/2020
ACHOLA SHADRACK OWINO*/
#include <stdio.h>

float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main()
{
    float num1, num2;

    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);

    // Perform all operations
    printf("The sum of your numbers is: %.2f\n", add(num1, num2));
    printf("The difference of your numbers is: %.2f\n", subtract(num1, num2));
    printf("The product of your numbers is: %.2f\n", multiply(num1, num2));

    // Check if the second number is zero before division
    if (num2 != 0)
        printf("The division of your numbers is: %.2f\n", divide(num1, num2));
    else
        printf("Cannot divide by zero!\n");

    return 0;
}

// Function to add two numbers
float add(float a, float b)
{
    return a + b;
}

// Function to subtract two numbers
float subtract(float a, float b)
{
    return a - b;
}

// Function to multiply two numbers
float multiply(float a, float b)
{
    return a * b;
}

// Function to divide two numbers
float divide(float a, float b)
{
    return a / b;
}

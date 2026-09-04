// Calculator in the C-Program

// Include the normal studio C file
#include <stdio.h>

//#include <stdbool.h>

// Main function (required)
int main() {

    // Variables
    char oper;
    int num1;
    int num2;
    int result;

    // Welcome message
    printf("Hello! Welcome to My Calculator!\n");

    // Request the first number
    printf("Please enter your first number: ");
    scanf("%d", &num1);
    printf("\n");
    
    // Request the second number
    printf("Please enter your second number: ");
    scanf("%d", &num2);
    printf("\n");

    // Requeste the operator
    printf("Please select your operator: ");
    scanf(" %c", &oper);

    // Do the math
    if (oper == '+') {
        result = num1 + num2;
        printf("%i+", num1);
        printf("%i=", num2);
        printf("%i", result);
    }
    else if (oper == '-') {
        result = num1 - num2;
        printf("%i-", num1);
        printf("%i=", num2);
        printf("%i", result);
    }
    else if (oper == '*') {
        result = num1 * num2;
        printf("%i*", num1);
        printf("%i=", num2);
        printf("%i", result);
    }
    else if (oper == '/') {
        result = num1 / num2;
        printf("%i/", num1);
        printf("%i=", num2);
        printf("%i", result);
    }
    else {
        // If the operator is not valid or +, -, *, or /
        printf("The operator '%c' is not recognized as a valid operator for this calculator.");
        printf("Please either use + for addition, - for sutraction, * for multiplication, or / for division.");
    }

    // Return 0 or else the program won't return true
    return 0;
}

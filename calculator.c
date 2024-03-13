#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef enum { ADD, SUBTRACT, MULTIPLY, DIVIDE } Operation;

double performOperation(double num1, double num2, Operation op) {
    switch (op) {
        case ADD:
            return num1 + num2;
        case SUBTRACT:
            return num1 - num2;
        case MULTIPLY:
            return num1 * num2;
        case DIVIDE:
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
                exit(1);
            }
            return num1 / num2;
    }
}

int main() {
    double num1, num2;
    char op;
    Operation operation;

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &op);

    switch (op) {
        case '+':
            operation = ADD;
            break;
        case '-':
            operation = SUBTRACT;
            break;
        case '*':
            operation = MULTIPLY;
            break;
        case '/':
            operation = DIVIDE;
            break;
        default:
            printf("Error: Invalid operation.\n");
            return 1;
    }

    printf("Enter second number: ");
    scanf("%lf", &num2);

    double result = performOperation(num1, num2, operation);
    printf("Result: %.2lf\n", result);

    return 0;
}
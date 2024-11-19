#include <stdio.h>

void add(float a, float b) {
    printf("Addition of %.2f and %.2f is %.2f\n", a, b, a + b);
}

void subtract(float a, float b) {
    printf("Subtraction of %.2f and %.2f is %.2f\n", a, b, a - b);
}

void multiply(float a, float b) {
    printf("Multiplication of %.2f and %.2f is %.2f\n", a, b, a * b);
}

void divide(float a, float b) {
    if (b != 0) {
        printf("Division of %.2f and %.2f is %.2f\n", a, b, a / b);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}

void modulus(int a, int b) {
    if (b != 0) {
        printf("Modulus of %d and %d is %d\n", a, b, a % b);
    } else {
        printf("Error: Modulus by zero is not allowed.\n");
    }
}

int main() {
    float num1, num2;
    int choice;

    printf("Press 1 for Addition\n");
    printf("Press 2 for subtract\n");
    printf("Press 3 for Multipiltion\n");
    printf("Press 4 for Division\n");
    printf("Press 5 for %%\n");  // %% is used to print % symbol
    printf("Press 0 for exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 5) {
        printf("Enter the first number: ");
        scanf("%f", &num1);
        printf("Enter the second number: ");
        scanf("%f", &num2);
    }

    switch (choice) {
        case 1:
            add(num1, num2);
            break;
        case 2:
            subtract(num1, num2);
            break;
        case 3:
            multiply(num1, num2);
            break;
        case 4:
            divide(num1, num2);
            break;
        case 5:
            modulus((int)num1, (int)num2); // Casting to integer for modulus
            break;
        case 0:
            printf("Exiting the calculator.\n");
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}

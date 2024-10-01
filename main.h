#include <stdio.h>

int main() {
    char op;
    float num1, num2;
    int choice;

    while (1) {
        // Display menu for user
        printf("\nSimple Calculator Menu:\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf_s("%d", &choice);

        // Exit if the user chooses option 5
        if (choice == 5) {
            printf("Exiting program...\n");
            break;
        }

        // Ask user for input numbers
        printf("Enter two numbers: ");
        scanf_s("%f %f", &num1, &num2);

        // Switch case to perform the selected operation
        switch (choice) {
            case 1:
                printf("Result: %.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
                break;
            case 2:
                printf("Result: %.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
                break;
            case 3:
                printf("Result: %.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
                break;
            case 4:
                if (num2 != 0) {
                    printf("Result: %.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            default:
                printf("Error: Invalid choice.\n");
                break;
        }
    }

    return 0;
}

#include <stdio.h>

void showMenu(void) {
    printf("\n===== BASIC CALCULATOR =====\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
}

int main(void) {
    int choice;
    double num1, num2;

    while (1) {
        showMenu();

        printf("Enter your choice (1-5): ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            return 1;
        }

        if (choice == 5) {
            printf("Thank you for using the calculator!\n");
            break;
        }

        if (choice < 1 || choice > 5) {
            printf("Invalid choice. Please select 1 to 5.\n");
            continue;
        }

        printf("Enter the first number: ");
        if (scanf("%lf", &num1) != 1) {
            printf("Invalid number.\n");
            return 1;
        }

        printf("Enter the second number: ");
        if (scanf("%lf", &num2) != 1) {
            printf("Invalid number.\n");
            return 1;
        }

        switch (choice) {
            case 1:
                printf("Result = %.2lf\n", num1 + num2);
                break;
            case 2:
                printf("Result = %.2lf\n", num1 - num2);
                break;
            case 3:
                printf("Result = %.2lf\n", num1 * num2);
                break;
            case 4:
                if (num2 == 0) {
                    printf("Error: Division by zero is not allowed.\n");
                } else {
                    printf("Result = %.2lf\n", num1 / num2);
                }
                break;
        }
    }

    return 0;
}

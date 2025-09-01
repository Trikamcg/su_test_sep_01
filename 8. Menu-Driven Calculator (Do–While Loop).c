//8. Menu-Driven Calculator (Do–While Loop)
#include <stdio.h>
int main() {
    int choice, num1, num2;
    do {
        printf("Menu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice >= 1 && choice <= 4) {
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
        }
        switch (choice) {
            case 1:
                printf("Result: %d\n", num1 + num2);
                break;
            case 2:
                printf("Result: %d\n", num1 - num2);
                break;
            case 3:
                printf("Result: %d\n", num1 * num2);
                break;
            case 4:
                if (num2 != 0) {
                    printf("Result: %f\n", (float)num1 / num2);
                } else {
                    printf("Error! Division by zero.\n");
                }
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 5);
    return 0;
}
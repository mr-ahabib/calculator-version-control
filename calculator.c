#include <stdio.h>

void add(float a, float b) { printf("Result: %.2f\n", a + b); }
void subtract(float a, float b) { printf("Result: %.2f\n", a - b); }
void multiply(float a, float b) { printf("Result: %.2f\n", a * b); }
void divide(float a, float b) { 
    if (b != 0) printf("Result: %.2f\n", a / b);
    else printf("Error: Division by zero!\n");
}

int main() {
    int choice;
    float num1, num2;
    do {
        printf("\nCalculator:\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\nChoose an option: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
        }

        switch (choice) {
            case 1: add(num1, num2); break;
            case 2: subtract(num1, num2); break;
            case 3: multiply(num1, num2); break;
            case 4: divide(num1, num2); break;
            case 5: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 5);

    return 0;
}

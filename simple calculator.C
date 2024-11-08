  include <stdio.h>

void add();
void subtract();
void multiply();
void divide();

int main() {
    int choice = 0;

    while (choice != 5) {
        printf("\nSimple Calculator\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: 
                add();
                break;
            case 2: 
                subtract();
                break;
            case 3: 
                multiply();
                break;
            case 4: 
                divide();
                break;
            case 5: 
                printf("Exited\n");
                break;
            default: 
                printf("Invalid choice.\n");
        }
    }

    return 0;
}

void add() {
    float a, b;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("Result: %.2f\n", a + b);
}

void subtract() {
    float a, b;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("Result: %.2f\n", a - b);
}

void multiply() {
    float a, b;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("Result: %.2f\n", a   b);
}

void divide() {
    float a, b;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    if (b != 0) {
        printf("Result: %.2f\n", a / b);
    } else {
        printf("Error: Division by zero!\n");
    }
}

#include <stdio.h>
int main() {
    int a, b;
    char n; 
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Enter the operation (+, -, *, /): ");
    scanf(" %c", &n); 
    switch (n) {
        case '+':
            printf("ADDITION: %d\n", a + b);
            break;
        case '-':
            printf("SUBTRACTION: %d\n", a - b);
            break;
        case '*':
            printf("MULTIPLICATION: %d\n", a * b);
            break;
        case '/':
            if (b != 0) {
                printf("DIVISION: %d\n", a / b);
            } else {
                printf("Error\n");
            }
            break;
        default:
            printf("Invalid operation.\n");
    }
    return 0;
}

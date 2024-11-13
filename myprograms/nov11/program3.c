#include <stdio.h>
void fibonacci(int n) {
    int first = 0, second = 1, next;

    printf("Fibonacci Series: %d, %d", first, second);

    for (int i = 3; i <= n; i++) {
        next = first + second;
        printf(", %d", next);
        first = second;
        second = next;
    }

    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of terms in Fibonacci series: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        fibonacci(n);
    }

    return 0;
}

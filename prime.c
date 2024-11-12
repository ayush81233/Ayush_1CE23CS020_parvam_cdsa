#include <stdio.h>
#include <stdbool.h>

bool isprime(int n) {
    if (n <= 1) return false;  
    if (n == 2 || n == 3) return true; 

    if (n % 2 == 0 || n % 3 == 0) return false; 

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    if (isprime(n)) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}

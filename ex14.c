#include <stdio.h>
int fibonacci(int n) {
    if (n <= 1) {
        return n; 
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main() {
    int n;
    printf("what position do you want to see the fibonacci series? ");
    scanf("%d", &n);
    printf("fibonacci series (first number):\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    printf("%d. Fibonacci number: %d", n, fibonacci(n-1));
}

#include <stdio.h>
int main() {
    int num;
    int factorial = 1;
    do {
        printf("enter a positive integer less than 50: ");
        scanf("%d", &num);
        if (num < 0) {
            printf("you entered a negative number. please enter a positive number.\n");
        } else if (num >= 50) {
            printf("you entered a number of 50 or more. please enter a number less than 50.\n");
        }
    } while (num < 0 || num >= 50); 
    for (int i = 1; i <= num; i++) {
        factorial *= i; 
    }
    printf("%d! = %llu\n", num, factorial); 
}

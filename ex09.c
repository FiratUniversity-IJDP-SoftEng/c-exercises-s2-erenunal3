#include <stdio.h>
int main() {
    int number; 
    int count = 0; 
    int sum = 0;
    printf("enter numbers(run by typing -1):\n");
    while (1) { 
        scanf("%d", &number); 
        if (number == -1) { 
            break;
        }
        count++; 
        sum += number;
    }
    if (count > 0) {
        float average = (float)sum / count; 
        printf("number of numbers entered %d\n", count); 
        printf("total: %d\n", sum); 
        printf("avarage: %.2f\n", average);
    } else {
        printf("nothing entered.\n"); 
    }
}

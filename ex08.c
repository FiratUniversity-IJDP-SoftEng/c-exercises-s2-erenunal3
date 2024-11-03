#include <stdio.h>
int main() {
    int numbers[10]; 
    int sum = 0; 
    printf("enter 10 numbers please:");
    for (int i = 0; i < 10; i++) {
        printf("%d. sayıyı girin: ", i + 1); 
        scanf("%d", &numbers[i]); 
        sum += numbers[i];
    }
    printf("your numbers:");
    for (int i = 0; i < 10; i++) {
        printf("%d\n", numbers[i]); 
    }
    float average = sum / 10.0; 
    printf("total: %d\n", sum);        
    printf("avarage: %.2f\n", average);  
}

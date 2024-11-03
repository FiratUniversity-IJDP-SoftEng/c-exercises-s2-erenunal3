#include <stdio.h>

int main() {
    int numbers[20]; 
    int index = 0;    
    for (int i = 99; i >= 51; i -= 3) {
        numbers[index] = i; 
        index++;             
    }
    printf("numbers divisible by 3:\n");
    for (int j = 0; j < index; j++) {
        printf("%d\n", numbers[j]);  
    }
}

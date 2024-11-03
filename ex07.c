#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        int col1 = i * 5;                               
        int col2 = 100 - ((i - 1) * 10 + 1);           
        int col3 = i;                                 

        printf("%d\t%d\t%d\t", col1, col2, col3); 
    }
}


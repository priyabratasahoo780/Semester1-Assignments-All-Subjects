#include <stdio.h>

int main() {
    int r ; 
    scanf("%d",&r);
    for (int i = 1; i <= r; i++) {
    
        for (int j = 1; j < 2 * r; j++) {
        
            if (j == r - i + 1 || j == r + i - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    
    for (int i = r - 1; i >= 1; i--) {
        for (int j = 1; j < 2 * r; j++) {
        
            if (j == r - i + 1 || j == r + i - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
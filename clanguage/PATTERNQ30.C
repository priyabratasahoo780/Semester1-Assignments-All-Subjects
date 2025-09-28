// #include <stdio.h>

// int main()
// {
//     int r;
//     scanf("%d",&r);
//     for(int i=1; i<=r; i++){
//         for(int j=1; j<=r-i; j++){
//            printf(" "); 
//     }
// for(int k=1; k<=2*i-1; k++){
//     printf("%c",64+k);
// }
// printf("\n");
// }
//     for(int i=r-1; i>=1; i--){
//         for(int j=1;j<=r-i; j++){
//             printf(" ");
//     }
//     for(int k=1; k<=2*i-1; k++){
//         printf("%c",64+k);
//     }
// printf("\n");
// }
//     return 0;
// }
#include <stdio.h>

int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        
        for (int j = 1; j <= i; j++) {
            printf("%c", 64+j);
        }
        
        for (int j = i - 1; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");
        
    }
     for (int i = 1; i <= n; i++) {
        
        for (int j = 1; j <= i; j++) {
            
            printf("%c", 64+j);
        }
        
        for (int j = i - 1; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");
        
    }
          return 0;
     }








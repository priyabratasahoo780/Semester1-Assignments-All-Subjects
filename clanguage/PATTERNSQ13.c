#include <stdio.h>

int main()
{
    int r=5;
    for(int i=1; i<=5; i++){
        for(int j=1; j<=r-i; j++){
           printf(" "); 
    }
for(int k=1; k<=2*i-1; k++){
    printf("*");
}
printf("\n");
}
    return 0;
}
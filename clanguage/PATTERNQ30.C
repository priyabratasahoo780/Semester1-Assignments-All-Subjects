#include <stdio.h>

int main()
{
    int r;
    scanf("%d",&r);
    for(int i=1; i<=5; i++){
        for(int j=1; j<=r-i; j++){
           printf(" "); 
    }
for(int k=1; k<=2*i-1; k++){
    printf("%c",64+k);
}
printf("\n");
}
    for(int i=r; i>=1; i--){
        for(int j=0;j<=r-i; j++){
            printf(" ");
    }
    for(int k=1; k<=2*i-3; k++){
        printf("%c",64+k);
    }
printf("\n");
}
    return 0;
}
#include<stdio.h>
int main(){
    int r;
    scanf("%d",&r);
   int count=1;
    
    for(int i=1; i<=r; i++){
        for(int j=1; j<=r-i; j++){
            printf(" ");
        }
        for(int k=1; k<=i*2-1; k++){
            printf("%d",count);
        count++;
    }
        printf("\n");
    }

    return 0;
}
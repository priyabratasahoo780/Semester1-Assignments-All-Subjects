#include <stdio.h>

int main()
{
     int r;
    scanf("%d",&r);
    for(int i=1; i<=r; i++){
        for(int j=1; j<=r; j++){
            if(i==j){
                printf("%d", j);
            }
            else if(i+j==r+1){
                printf("%d",r-i+1);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int num;
    scanf("%d",&num);
    for(int i=0; i<=num; i++){
        for(int j=0; j<=num; j++){
            if(i+j<=num){
                printf("%c",65+j);
            }
            else{
                printf(" ");
            }
            
        }
        printf("\n");
    }

    return 0;
}

#include<stdio.h>
  int main()
  {
  int r;
    scanf("%d", &r);
    for(int i=1; i<=r; i++){
        for(int j=1; j<=r; j++){
 if(j==r/2+1 || i==r/2+1){
    printf("*");
 }
else{
    printf(" ");
}
        }
        printf("\n");
    }


            return 0;
        }
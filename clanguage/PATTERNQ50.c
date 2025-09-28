#include<stdio.h>
int main(){
    int r;
    scanf("%d",&r);
     int num = r*(r+1)/2;
    for(int i=1; i<=r; i++){
       
        for(int j=1; j<=i; j++){
              printf("%d ",num);
              num--;
        }
    printf("\n");
}
return 0;
}
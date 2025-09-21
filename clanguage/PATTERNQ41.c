#include<stdio.h>
int main()
{
    int r;
    scanf("%d",&r);
    int x=1;
    int y=2*r-1;
    for(int i=1; i<=r; i++){
        for(int j=1; j<2*r; j++){
      if(j==x || j==y || i==1){
        printf("*");
      }
      else{
        printf(" ");
      }
    }
      x++;
      y--;
        
        printf("\n");
    }
    return 0;
}
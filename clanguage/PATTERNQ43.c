#include<stdio.h>
  int main()
  {
  int r, c;
    scanf("%d %d", &r, &c);
    for(int i=1; i<=r; i++){
        for(int j=1; j<=c; j++){
 if(i==1 || i==r || j==1 || j==c){
    printf("%d",j);
 }
else{
    printf(" ");
}
        }
        printf("\n");
    }


            return 0;
        }
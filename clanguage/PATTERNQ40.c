// #include<stdio.h>
// int main()
// {
//     int r;
//     scanf("%d",&r);
//     int x=r;
//     int y=r;
//     for(int i=1; i<=r; i++){
//         for(int j=1; j<2*r; j++){
//       if(j==x || j==y || i==r){
//         printf("*");
//       }
//       else{
//         printf(" ");
//       }
//     }
//       x--;
//       y++;
        
//         printf("\n");
//     }
//     return 0;
// }
#include<stdio.h>
int main()
{
    int r;
    scanf("%d",&r);
    int x=r;
    int y=r;
    for(int i=1; i<=r; i++){
        for(int j=1; j<2*r; j++){
      if(i==r || (i+j)==r+1 || (j-i==r-1)){
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
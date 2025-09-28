// #include<stdio.h>
// int main(){
//     int r;
//     scanf("%d",&r);
//     for(int i=1; i<=r; i++){
//         for(int j=1; j<=r; j++){
//             if(i==1 || j==1 || i==r || j==r || i==j && i+j==(r/2+1)*2){
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }
#include<stdio.h>
int main()
{
    int r;
    scanf("%d",&r);
    for(int i=1; i<=r; i++){
        for(int j=1; j<=r; j++){
            if(i==1 || j==1 || i==r || j==r || i==j && i+j==(r+1)){
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
#include <stdio.h>
int main()
{
   int num;
   //5
   scanf("%d",&num);
   
   for(int i=1; i<=num; i++){
       //1<=5
       for(int j=1; j<=num-i; j++){
           //1
           printf(" ");
       }
       for(int k=1; k<i+1; k++){
           printf("%d",k);
       }
  printf("\n");
   }
    return 0;
}
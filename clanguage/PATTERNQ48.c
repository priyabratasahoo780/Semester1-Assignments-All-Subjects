#include <stdio.h>

int main()
{
    int r;
    
scanf("%d",&r);
      int num=1;
    for(int i=1; i<=r; i++){
        for(int j=1; j<=r; j++){
            printf(" %d", num);
            num++;
    }
   printf("\n");
}     
    return 0;
}


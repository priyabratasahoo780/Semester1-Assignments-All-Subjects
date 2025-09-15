#include <stdio.h>

int main()
{
    int n;
    printf("enter number:");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        if(n<=26){
            
        printf("%c\n",'A'+i);
    }
    else{
        //  printf("%c",'A'+i);
        // //  break;
        printf("Invalid");
        break;
    }
}
    return 0;
}
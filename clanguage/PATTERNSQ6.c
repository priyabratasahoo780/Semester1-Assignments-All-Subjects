#include <stdio.h>

int main()
{
    int i, j, num;
    scanf("%d",&num);
    for(i=1; i<=num; i++){
        for(j=1; j<=num; j++){
            printf("%c",'A'+j-1);
        }
        printf("\n");
    }

    return 0;
}

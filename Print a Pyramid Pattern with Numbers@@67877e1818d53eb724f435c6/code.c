#include <stdio.h>


int main() {
    int i,j,k,space;
    scanf("%d",&k);
    for(i=0;i<=k;i++){
        for(space=1;space<=k-1;space++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}
  
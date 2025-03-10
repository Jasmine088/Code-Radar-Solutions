#include <stdio.h>
int main(){
    int i,j,k,n=1;
    scanf("%d",&k);
     for(i=1;i<=k;i++){
        for(j=1;j<=i;j++){
            printf("%d ",n);
            n++;
            }
            printf("\n");
            }
}
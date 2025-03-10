#include <stdio.h>
int main(){
    int i,j,k,space,a;
    scanf("%d",&k);
    for(i=1;<=k,i++){
        for(space=1;space<=k-i;space++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%d",j);
            
        }
        int b=i-1;
        for(a=1;a<=i-1;a++){
            printf("%d",b);
            b--;
        }
    }
}
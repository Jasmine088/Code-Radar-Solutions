#include<stdio.h>
int main(){
    int i,j,k,a;
    scanf("%d",&k);
    for(i=1;i<=k;i++){
        if(i%2==0) a=0;
        else a=1;
        for(j=0;j<i;j++){
            printf("%d ",a);
            if(a==1) a=0;
            else a=1;
        }
        printf("\n");
    }
}
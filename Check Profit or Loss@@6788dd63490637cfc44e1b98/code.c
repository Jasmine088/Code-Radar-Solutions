#include <stdio.h>

int main(){
    int a,b;
    scanf("%d",&a,&b);
    if(a>b){
        printf("Loss");
        }
    else if(b>a){
        printf("Profit");
    }

    else if(a==b){
        printf("No Profit No LOss");
    }
}
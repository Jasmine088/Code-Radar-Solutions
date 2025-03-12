#include<stdio.h>
int main(){
    int a,b,c,result;
    if(a+b>=c){
        printf("%s","Valid");
    }
    else if(b+c>=a){
        printf("%s","Valid");
    }
    else if(a+c>=b){
        printf("%s","Valid");
    }
    else{
        printf("%s","Invalid");
    }
}
#include<stdio.h>
int main(){
    int a,b,c,result;
    if(a+b>=c){
        printf("%s","Valid");
    }
    elif(b+c>=a){
        printf("%s","Valid");
    }
    elif(a+c>=b){
        printf("%s","Valid");
    }
    else{
        printf("%s","Invalid");
    }
}
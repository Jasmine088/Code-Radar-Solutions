#include<stdio.h>
int main(){
    int a,b,c,result;
    if((a+b>c)||(b+c>a)||(a+c>b)){
        printf("%s","Valid");
    }
    else {
        printf("%s","Invalid");
    }
}
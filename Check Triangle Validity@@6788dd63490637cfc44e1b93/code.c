#include<stdio.h>
int main(){
    int a,b,c,result;
    if((a+b>c)&&(a+c>b)&&(b+c>a)){
        printf("%s","Valid");
    }
    else {
        printf("%s","Invalid");
    }
}
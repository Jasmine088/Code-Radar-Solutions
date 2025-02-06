#include <stdio.h>


int main() {
    int number;
    scanf("%d",&number);
    for (int i =1;i<=10;i++){
        printf("%d x %d = %d",number,i,number*i);printf("\n");
    }
    return 0;
}
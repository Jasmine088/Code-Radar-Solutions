int main(){
    int i,j,k,space;
    scanf("%d",&k);
    for(i=1;i<=k;i++){
        for(space=1;space<=k-i;space++){
            printf(" ");
        }
        for(j=1;j<=(2*i)-1;j++){
            printf("*");
        }
        printf("\n");
        
    }
}
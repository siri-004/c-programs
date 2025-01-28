#include<stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        for(int j=1;j<=n;j++){
            if(i==1||i==n/2||i==n-1){
                printf("*");
            }
            else if(i<n/2&&j==1){
                printf("*");
            }
            else if(i>n/2&&j==n){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
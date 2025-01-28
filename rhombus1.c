#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int sp=0;sp<2*(n-i);sp++){
            printf(" ");
        }
        for(int j=0;j<2*i+1;j++){
            printf("* ");
        }
        printf("\n");
    }
    for(int i=n;i>=0;i--){
        for(int sp=0;sp<2*(n-i);sp++){
            printf(" ");
        }
        for(int j=0;j<2*i+1;j++){
            printf("* ");
        }
        printf("\n");
    }
}

#include<stdio.h>
int main(){
    for(int i=1;i<=6;i++){
        for(int j=0;j<=6-i;j++){
            printf("  ");
        }
        for(int k=0;k<i;k++){
            printf("* ");
        }
       for(int l=1;l<i;l++){
            printf("* ");
        }
        printf("\n");
    }
    for(int i=7;i>0;i--){
        for(int j=0;j<=6-i;j++){
            printf("  ");
        }
        for(int k=1;k<=i;k++){
           printf("* ");
        }
        for(int l=6;l>0;l--){
           if(l<i){
               printf("* ");
           }
        }
        printf("\n");
    }
}
#include<stdio.h>
void main(){
    char a[50][50];
    for(int i=0;i<50;i++){
        for(int j=0;j<50;j++){
            a[i][j]='*';
        }
    }
    for(int i=21;i>10;i--){
        for(int j=15;j<35;j++){
            a[i][j]=' ';
        }
        for(int sp=15;sp<=35-i;sp++){
            a[i][sp]='*';
        }
    }
    for(int i=0;i<50;i++){
        for(int j=0;j<50;j++){
            printf("%c ",a[i][j]);
        }
        printf("\n");
    }
}
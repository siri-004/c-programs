#include<stdio.h>
int main(){
    char a[30][30];
    for(int i=0;i<30;i++){
        for(int j=0;j<30;j++){
            a[i][j]='*';
        }
    }
    for(int i=10;i<20;i++){
        for(int j=10;j<20;j++){
            a[i][j]='@';
        }
    }
    for(int i=0;i<30;i++){
        for(int j=0;j<30;j++){
            printf("%c ",a[i][j]);
        }
        printf("\n");
    }
}
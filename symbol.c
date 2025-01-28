#include<stdio.h>
int main(){
    int a[100][100];
    for(int i=0;i<100;i++){
        for(int j=0;j<100;j++){
            a[i][j]=' ';
        }
    }
    int m=50,n=50;
    for(int i=15;i<30;i++){
        for(int j=m;j<n;j++){
            a[i][j]='*';
        }
        m=m-1;
        n=n+1;
    }
    int p=50,r=50;
    for(int i=35;i>=20;i--){
        for(int j=p;j<r;j++){
            a[i][j]='*';
        }
        p=p-1;
        r=r+1;
    }
    for(int i=0;i<100;i++){
        for(int j=0;j<100;j++){
            printf("%c",a[i][j]);
        }
        printf("\n");
    }
}
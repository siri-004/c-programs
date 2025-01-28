#include<stdio.h>
#include<windows.h>
#include<unistd.h>
int a[100][100];
int m=5,n=5,x=6,y=6;
void sp(){
    for(int i=0;i<100;i++){
        for(int j=0;j<100;j++){
            a[i][j]=' ';
        }
    }
}
void st(){
    for(int i=m;i<m+x;i++){
        for(int j=n;j<n+y;j++){
            a[i][j]='*';
        }
    }
}
void pr(){
    for(int i=0;i<100;i++){
        for(int j=0;j<100;j++){
            printf("%c",a[i][j]);
        }
        printf("\n");
    }
}
int main(){
    while(1){
        system("cls");
        sp();
        st();
        pr();
        n=n+1;
        
    }
}
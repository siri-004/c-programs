#include<stdio.h>
void main(){
    char a[30][30];
    for(int i=0;i<30;i++){
        for(int j=0;j<30;j++){
            a[i][j]=' ';
        }
    }
 //   for(int i=20;i>10;i--){
   //     for(int j=11;j<i;j++){
     //       a[i][j]=' ';
       // }
    //}
    for(int i=21;i>10;i--){
        for(int j=0;j<i;j++){
            a[i][j]='*';
        }
        for(int sp=0;sp<=20-i;sp++){
            a[i][sp]=' ';
        }
    }
    for(int i=0;i<30;i++){
        for(int j=0;j<30;j++){
            printf("%c ",a[i][j]);
        }
        printf("\n");
    }
}
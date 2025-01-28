#include<stdio.h>
int main(){
    int a[100][100];
    for(int i=0;i<100;i++){
        for(int j=0;j<100;j++){
            a[i][j]=' ';
        }
    }
    int m,n;
    scanf("%d%d",&m,&n);
    for(int i=15;i<40;i++){
        for(int j=m;j<n;j++){
            a[i][j]='*';
        }
        m=m-1;
        n=n+1;
    }
    int x,y;
    scanf("%d%d",&x,&y);
    for(int i=31;i<40;i++){
        for(int j=x;j<y;j++){
            a[i][j]=' ';
        }
        x=x-3;
        y=y+3;
    }
    for(int i=0;i<100;i++){
        for(int j=0;j<100;j++){
            printf("%c",a[i][j]);
        }
        printf("\n");
    }
}
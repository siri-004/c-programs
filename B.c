#include<stdio.h>
int main(){
    int i,j;
    for(i=1;i<=7;i++){
        if(i==1||i==4||i==7){
            for(j=1;j<=4;j++){
                if((i==1&&j<4)||(i==4&&j<4)||(i==7&&j<4)){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
        }
        else if (i>1||i<4||i>4||i<7){
            for(j=1;j<=4;j++){
                if(j==1||j==4){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
        }
        printf("\n");
    }
}
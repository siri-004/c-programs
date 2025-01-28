#include <stdio.h>
int main(){
    for(int i=1;i<=7;i++){
        if(i==1||i==4||i==7){
            for(int j=1;j<=5;j++){
            if((i==1&&j>1&&j<5)||(i==4&&j>1&&j<5)||(i==7&&j>1&&j<5)||(j==1&&i>1&&i<4)||(j==1&&i>5)||(j==5&&i<3)||(j==5&&i>4&&i<7)){
                printf("* ");
            }
            else{
                printf("  ");
            }
          }
        }
        else if(i>1||i<4||i>4||i<7){
            for(int j=1;j<=5;j++){
            if((i==1&&j>1&&j<5)||(i==4&&j>1&&j<5)||(i==7&&j>1&&j<5)||(j==1&&i>1&&i<4)||(j==1&&i>5)||(j==5&&i<3)||(j==5&&i>4&&i<7)){
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
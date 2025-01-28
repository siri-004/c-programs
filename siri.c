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
         printf("  ");
           for(int j=6;j<=10;j++){
                if(i==1||i==7){
                    printf("* ");
                }
                else if(i==4&&j==8){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
            printf("  ");
            for(int j=11;j<=15;j++){
                if((i==1&&j<15)||(i==4&&j<15)){
                    printf("* ");
                }
                else if((i==7&&j==11)||(i==7&&j==15)||(i==7&&j==14)){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
            printf("  ");
            for(int j=16;j<=20;j++){
                if(i==1||i==7){
                    printf("* ");
                }
                else if(i==4&&j==18){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
            printf("       ");
            for(int j=21;j<=25;j++){
                if((i==1||i==7)&&(j>21&&j<25)){
                    printf("* ");
                }
                else if(i==4&&j==21){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            } 
            printf("  ");
            for(int j=26;j<=30;j++){
                if(i==1&&j==26||i==1&&j==30||i==7&&j==26||i==7&&j==30){
                    printf("* ");
                }
                else if(i==4){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
            printf("  ");
            for(int j=31;j<=35;j++){
                if(i==1||i==4){
                    printf("* ");
                }
                else if((i==7&&j==31)||(i==7&&j==35)){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
            printf("  ");
            for(int j=36;j<=40;j++){
                if((i==1&&j==36)||(i==1&&j==40)||(i==7&&j==36)||(i==7&&j==40)){
                    printf("* ");
                }
                else if((i==4&&j==36)||(i==4&&j==40)||(i==4&&j==38)){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
            printf("  ");
            for(int j=41;j<=45;j++){
                if((i==1&&j<45)||(i==7&&j<45)){
                    printf("* ");
                }
                else if((i==4&&j==41)||(i==4&&j==45)){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
            printf("  ");
            for(int j=46;j<=50;j++){
                if(i==1||i==4){
                    printf("* ");
                }
                else if((i==7&&j==46)||(i==7&&j==50)){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
            printf("  ");
            for(int j=51;j<=55;j++){
                if((i==1&&j==51)||(i==1&&j==55)||(i==7&&j==51)||(i==7&&j==55)){
                    printf("* ");
                }
                else if((i==4&&j==51)||(i==4&&j==55)||(i==4&&j==53)){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
            printf("  ");
            for(int j=56;j<=60;j++){
                if(i==1||i==4){
                    printf("* ");
                }
                else if((i==7&&j==56)||(i==7&&j==60)){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
            printf("  ");
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
          printf("  ");
           for(int j=6;j<=10;j++){
                if(j==8){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
            printf("  ");
            for(int j=11;j<=15;j++){
                if((i<4&&j==11)||(i<4&&j==15)||(i<7&&j==11)){
                    printf("* ");
                }
                else if((i==5&&j==12)||(i==6&&j==13)){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
            printf("  ");
            for(int j=16;j<=20;j++){
                if(j==18){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
            printf("       ");
            for(int j=21;j<=25;j++){
                if(i==2&&j==21||i==2&&j==25||i==6&&j==21||i==6&&j==25){
                    printf("* ");
                }
                else if(i==3&&j==21||i==5&&j==21){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            } 
            printf("  ");
             for(int j=26;j<=30;j++){
                if(j==26||j==30){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
            printf("  ");
            for(int j=31;j<=35;j++){
                if(j==31||j==35){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
            printf("  ");
            for(int j=36;j<=40;j++){
                if(j==36||j==40){
                    printf("* ");
                }
                else if((i==3&&j==37)||(i==5&&j==39)){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
            printf("  ");
            for(int j=41;j<=45;j++){
                if(j==41||j==45){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
            printf("  ");
            for(int j=46;j<=50;j++){
                if(j==46||j==50){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
            printf("  ");
            for(int j=51;j<=55;j++){
                if(j==51||j==55){
                    printf("* ");
                }
                else if((i==3&&j==52)||(i==5&&j==54)){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
            printf("  ");
            for(int j=56;j<=60;j++){
                if(j==56||j==60){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
            printf("  ");
        }
        printf("\n");
    }
  }
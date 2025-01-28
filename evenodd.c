#include<stdio.h>
int main(){
    int a[10],even[10],odd[10];
    int j=0,k=0;
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<10;i++){
        if(a[i]%2==0){
            even[j]=a[i];
            j++;
        }
        else{
            odd[k]=a[i];
            k++;
        }
    }
    for(int i=0;i<j;i++){
        printf("even numbers : %d\n",even[i]);
    }
    for(int i=0;i<k;i++){
        printf("odd numbers : %d\n",odd[i]);
    }
}
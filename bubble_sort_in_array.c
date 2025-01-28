#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int k=0;k<n-1;k++){
        for(int i=0;i<n-k-1;i++){
            if(a[i]>a[i+1]){
                int t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
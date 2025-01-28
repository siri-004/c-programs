#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int t=a[0];//taking temporary variable t=a[0]
    for(int i=0;i<n;i++){
        if(t>a[i]){//if a[i]element is smaller than temp var then update t with new element
            t=a[i];
        }
    }
    printf("%d",t);
    
}
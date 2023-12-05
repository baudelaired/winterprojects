#include<stdio.h>

int main(){
    long long int n;
    scanf("%lld",&n);
    long long int arr[n];
    long long int c=0;
    for(long long int i=0; i<n; i++){
        scanf("%lld",&arr[i]);
    }
    for(long long int i=1; i<n; i++){
        if(arr[i]<arr[i-1]){
            c=c+arr[i-1]-arr[i];
            arr[i]=arr[i-1];
        }
    }
    printf("%lld",c);
}
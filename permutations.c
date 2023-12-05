#include<stdio.h>

int main(){
    long long int n;
    scanf("%lld",&n);
    if(n==2 || n==3){
        printf("NO SOLUTION");
    }else{
        long long int c=2;
        for(long long int i=0; i<n/2; i++){
            printf("%lld ",c);
            c=c+2;
        }
        c=1;
        for(long long int i=0; i<=n/2; i++){
            printf("%lld ",c);
            c=c+2;
        }
    }
}
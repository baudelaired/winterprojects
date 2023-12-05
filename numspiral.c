#include<stdio.h>

int main(){
    long long int n;
    scanf("%lld",&n);
    while(n--){
        long long int x , y;
        scanf("%lld %lld",&x,&y);
        long long int a;
        a=x>=y?x:y;
        if(a%2==0){
            printf("%lld\n",a*a-(a-1)+x-y);
        }else{
            printf("%lld\n",a*a-(a-1)+y-x);
        }
    }
}
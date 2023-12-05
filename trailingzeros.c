#include<stdio.h>
#include<math.h>

int main(){
    long long int n;
    scanf("%lld",&n);
    long long int z=0;
    long long int i=1;
    while(n/(pow(5,i))!=0){
        z=z+(n/(pow(5,i)));
        i++;
    }
    printf("%lld",z);
}
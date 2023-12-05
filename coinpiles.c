#include<stdio.h>

int main(){
    long long int t;
    scanf("%lld",&t);
    while(t--){
        long long int a,b;
        scanf("%lld %lld",&a,&b);
        if((a+b)%3==0){
            if(a==0 && b==0){
                printf("YES\n");
                continue;
            }
            else if(a==0 || b==0){
                printf("NO\n");
            }else{
                if(a%b==0 && a/b==2){
                    printf("YES\n");
                    continue;
                }
                else if(b%a==0 && b/a==2){
                    printf("YES\n");
                    continue;
                }
                else if(a/b==1 || b/a==1){
                    printf("YES\n");
                }else{
                    printf("NO\n");
                }
            }
        }else{
            printf("NO\n");
        }
    }
}
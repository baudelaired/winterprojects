#include<stdio.h>

int main(){
    char a,b;
    scanf("%c",&a);
    b=a;
    long long int max_rep=0,rep=0;
    while(b=='A' || b=='C' || b=='G' || b=='T'){
        scanf("%c",&b);
        int flag=1;
        if(b==a){
            rep++;
            if(rep>max_rep){
                max_rep=rep;
            }
            flag=0;
        }
        if(flag==1){
            rep=0;
        }
        a=b;
    }
    printf("%lld",max_rep+1);
}
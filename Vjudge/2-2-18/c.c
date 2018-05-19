#include<stdio.h>
int main(){
    long long int a,b;
    long long int s,i,j;
    scanf("%lld%lld",&a,&b);
    if(b>=0&&a>=1){
        s=(a+b)%3;
        if(s==0){
            printf("Possible\n");
        }else{
            printf("Impossible\n");
        }
    }else{
        printf("Impossible\n");
    }
    return 0;
}

#include<stdio.h>
int main(){
    long long int a,b,n;
    scanf("%lld",&n);
    for(;n;n--){
        scanf("%lld%lld",&a,&b);
        if(a<b){
            printf("<\n");
        }else if(a>b){
            printf(">\n");
        }else{
            printf("=\n");
        }
    }
    return 0;
}

#include<stdio.h>
#include<math.h>
int main(){
    long long int aa;
    double bb,cc;
    while(1){
        scanf("%lld",&aa);
        if(aa==0){
            break;
        }
        bb=sqrt(aa);
        cc=ceil(bb);
        if(bb==cc){
            printf("yes\n");
        }else{
            printf("no\n");
        }
    }
    return 0;
}

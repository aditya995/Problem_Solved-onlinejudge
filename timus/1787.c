#include<stdio.h>
int main(){
    int a,b,c,d=0;
    scanf("%d%d",&a,&b);
    for(;b;--b){
        scanf("%d",&c);
        d=d+c;
        if(d>a){
            d-=a;
        }else{
            d-=d;
        }
    }
    printf("%d\n",d);
    return 0;
}

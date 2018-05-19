#include<stdio.h>
int main(){
    int n,k,x,y,a;
    scanf("%d%d%d%d",&n,&k,&x,&y);
    if(n<=k){
        a=n*x;
    }else{
        a=k*x;
        a+=(y*(n-k));
    }
    printf("%d\n",a);
    return 0;
}

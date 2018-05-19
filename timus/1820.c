#include<stdio.h>
int main(){
    int i=0,n,k;
    scanf("%d%d",&n,&k);
    if(n>=k){
        n=n*2;
        i=n/k;
        if((n%k)>0){
            i++;
        }
    }else{
        i=2;
    }
    printf("%d\n",i);
    return 0;
}

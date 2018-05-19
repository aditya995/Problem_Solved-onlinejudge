#include<stdio.h>
int main(){
    int a, i, b, d;
    scanf("%d",&d);
    short int c[d];
    for(i=0;i<d;i++){
        scanf("%d%d",&a,&b);
        c[i]=a+b;
    }
    for(i=0;i<d;i++){
        printf("Case %d: %d\n",i+1,c[i]);
    }
    return 0;
}
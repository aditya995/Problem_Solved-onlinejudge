#include<stdio.h>
int main(){
    int a, i, d;
    scanf("%d",&d);
    short int c[d],b[d];
    for(i=0;i<d;i++){
        scanf("%d",&a);
        if(a>10){
            c[i]=a-10;
            b[i]=10;
        }else{
            c[i]=a;
            b[i]=0;
        }
    }
    for(i=0;i<d;i++){
        printf("%d %d\n",b[i],c[i]);
    }
    return 0;
}
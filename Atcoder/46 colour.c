#include<stdio.h>
int main(){
    int a[3],t,i,j,k=3;
    scanf("%d%d%d",&a[0],&a[1],&a[2]);
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            if(a[j]>a[j+1]){
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    for(i=0;i<2;i++){
        if(a[i]==a[i+1]){
            k--;
        }
    }
    printf("%d\n",k);
    return 0;
}

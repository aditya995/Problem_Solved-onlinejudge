#include<stdio.h>
int main(){
    int a[180000],i,n,j,k,num,s,cou=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&num);
        scanf("%d",&s);
        for(j=0;j<num;j++){
            scanf("%d",&a[j]);
        }
        for(k=0;k<(num-1);k++){
            for(j=k+1;j<(num);j++){
                printf("%d %d|%d|",k,j,a[k]+a[j]);
                if((a[k]+a[j])==s){
                    cou++;
                }
            }printf("\n");
        }
        printf("Case %d: %d\n",i+1,cou);
        cou=0;
    }
    return 0;
}

#include<stdio.h>
#include<math.h>
long long int a[1024*128];
int main(){
    int i,j,k=-1,l=0;
    /*char c;
    for(i=0;(c=getchar())!=NULL;i++){
        if(isdigit(c)){
            if(l==0){
                k++;
            }
            a[k]=(a[k]*10)+(c-48);
            l++;
        }else{
            l=0;
        }
    }
    for(;k>=0;k--){
        printf("%llf\n",sqrt(a[k]));
    }*/
    for(i=0;(scanf("%lld",&a[i]))!=EOF;i++){
    }
    for(i--;i>=0;i--){
        printf("%.4llf\n",sqrt(a[i]));
    }
    return 0;
}
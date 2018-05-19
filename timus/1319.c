#include<stdio.h>
int main(){
    int i,j,k,l,m,o,b,c,n,a[100][100];
    scanf("%d",&n);
    c=1;
    for(i=0,k=0,b=0;b<n+n-1;b++,i++,k++){
        if(i+1>n){
            i--;
        }
        j=n-i-1;
        if(b<n){
            k=0;
        }l=n-k-1;
        //printf("%d %d-",i,j);printf("%d %d\n",k,l);
        for(m=k,o=j;m<=i;c++,m++,o++){
            a[m][o]=c;
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

#include<stdio.h>
int main(){
    int n,i,j,a=0;
    char st[50];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",st);
        for(j=0;st[j]!='\0';j++){
            if(st[j]=='+'){
                a++;
            }
        }
    }
    n=n+a+2;
    if(n==13){
        n=14;
    }
    printf("%d\n",n*100);
    return 0;
}

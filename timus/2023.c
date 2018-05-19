#include<stdio.h>
int main(){
    int n,i,a[1000],pos=1,step=0,tstep=0;
    char str[1000][20];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",str[i]);
        if(str[i][0]=='A'||str[i][0]=='P'||str[i][0]=='O'||str[i][0]=='R'){
            a[i]=1;
        }else if(str[i][0]=='B'||str[i][0]=='M'||str[i][0]=='S'){
            a[i]=2;
        }else if(str[i][0]=='D'||str[i][0]=='G'||str[i][0]=='J'||str[i][0]=='K'||str[i][0]=='T'||str[i][0]=='W'){
            a[i]=3;
        }
    }
    for(i=0;i<n;i++){
        step=pos-a[i];
        pos=a[i];
        if(step<0){
            step*=-1;
        }
        tstep+=step;
    }
    printf("%d\n",tstep);
    return 0;
}

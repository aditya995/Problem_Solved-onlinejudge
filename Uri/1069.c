#include<stdio.h>
int main(){
    char a[1000];
    int n,i,j,k,p,q;
    scanf("%d",&n);getchar();
    for(i=0;i<n;i++){
        for(j=0;j<1000;j++){
            a[j]='\0';
        }
        scanf("%[^\n]",a);getchar();
        for(j=0;a[j]!='<'&&j!=1000;j++);
        for(k=999;a[k]!='>'&&(k+1)!=0;k--);
        for(p=0,q=0;j<=k;j++){
            if(a[j]=='<'){
                p++;
            }else if(a[j]=='>'){
                q++;
            }
        }
        if(p<=q){
            printf("%d\n",p);
        }else{
            printf("%d\n",q);
        }
    }
    return 0;
}

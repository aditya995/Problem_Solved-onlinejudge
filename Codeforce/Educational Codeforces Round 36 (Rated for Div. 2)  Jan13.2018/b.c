#include<stdio.h>
int main (){
    int n,p,r,l,s=0;
    while(scanf("%d%d%d%d",&n,&p,&l,&r)!=EOF){
        if(l==1&&r==n){
            printf("0\n");
        }else if (l>1&&r==n&&p>=l&&p<=r){
            s=p-l;
            printf("%d\n",s+1);
        }else if(l==1&&r<n&&p>=l&&p<=r){
            s=r-p;
            printf("%d\n",s+1);
        }else if(l>1&&r==n&&(p<l||p>r)){
            s=l-p;
            printf("%d\n",s+1);
        }else if(l==1&&r<n&&(p<l||p>r)){
            s=p-r;
            printf("%d\n",s+1);
        }else if(l>1&&r<n&&p<l){
            s=l-p+1+r-l+1;
            printf("%d\n",s);
        }else if(l>1&&r<n&&p>r){
            s=p-r+1+r-l+1;
            printf("%d\n",s);
        }else if(l>1&&r<n&&p>=l&&p<=r){

                if(p<=(l+r)/2){
                    s=p-l+1;
                }else{
                    s=r-p+1;
                }

            s+=r-l+1;
            printf("%d\n",s);
        }

    }
    return  0;
}

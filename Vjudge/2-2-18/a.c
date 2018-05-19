#include<stdio.h>
int main(){
    int a[50],i,j,k,n,temp;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    temp=0;
    for(i=n-k;i<n;i++){
        temp+=a[i];
    }
    printf("%d\n",temp);

    return 0;
}

#include<stdio.h>
unsigned long long int a[65547],b;
int bin(unsigned long long int z){
    unsigned long long int p=z,start=0,end=65535,mid,q=0;
    for(;start!=mid&&end!=mid;){
        mid=(start+end)/2;
        if(a[mid]>p){
            end=mid-1;
        }else if(a[mid]<p){
            start=mid+1;
        }else if (a[mid]==p){
            q=1;
            break;
        }
    }
    return q;
}
int main(){
    int i,s=0,j=0;
    for(i=0;i<65536;i++){
        s=s+i;
        a[i]=s+1;
        //printf("%d ",a[i]);
    }
    //printf("%u ",a[i-1]);
    scanf("%d",&j);
    while(j--){
        scanf("%u",&b);
        printf("||%u",b);
        if(bin(b)==1){
            printf("1 ");
        }else{
            printf("0 ");
        }
    }
    return 0;
}

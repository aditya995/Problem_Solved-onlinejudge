#include<stdio.h>
char a[100][255];
int n;
void bsort(int p){
    int i,j;
    char temp;
    printf("%d",n);
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(a[j][p]>a[j+1][p]){
                temp=a[j][p];
                a[j][p]=a[j+1][p];
                a[j+1][p]=temp;
            }
        }
    }
}
int main(){
    int i=0,j;
    scanf("%d",&n);
    int m=n;
    while(m--){
        scanf("%s",a[i++]);
    }
    bsort(0);
    for(i=0;i<n;i++){
        for(j=0;a[i][j]!='\0';j++){
            printf("%c",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}


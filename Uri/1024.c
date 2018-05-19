int main(){
    int i,j,n,k,l=1;
    scanf("%d",&n);getchar();
    char a[n][1000],b;
    for(k=0;k<n;k++){
        for(i=0;;i++){
            scanf("%c",&a[k][i]);
            if(a[k][i]=='\n'){
                a[k][i]='\0';
                break;
            }
        }
    }
    for(k=0;k<n;k++){
        for(i=0,j=(strlen(a[k]))-1;i<j;i++,j--){
            b=a[k][i];
            a[k][i]=a[k][j];
            a[k][j]=b;
            if(isalpha(a[k][i])){
                a[k][i]+=3;
            }
            if(isalpha(a[k][j])){
                a[k][j]+=2;
            }else{
                a[k][j]-=1;
            }
        }
        if(strlen(a[k])%2==1){
            if(isalpha(a[k][j])){
                a[k][j]+=2;
            }else{
                a[k][j]-=1;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%s\n",a[i]);
    }
    //printf("->%d->%d->%d",'.','-','0');
    return 0;
}

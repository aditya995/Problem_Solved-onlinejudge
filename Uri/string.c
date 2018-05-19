#include<stdio.h>
int main(){
    char a[10][50];
    int i;
    for(i=0;i<3;i++){
        scanf("%[^\n]",a[i]);getchar();
    }

    for(i=0;i<3;i++){
        printf("->%s",a[i]);
    }
    return 0;
}

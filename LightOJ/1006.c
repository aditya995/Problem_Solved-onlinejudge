#include<stdio.h>
int a, b, c, d, e, f, i;
long long int arr[101];
int fn( int n ) {
    if(arr[n]!=-1){
        return arr[n];
    }
    else if( n == 0 ){arr[0]=a;return a;}
    else if( n == 1 ){arr[1]=b;return b;}
    else if( n == 2 ){arr[2]=c;return c;}
    else if( n == 3 ){arr[3]=d;return d;}
    else if( n == 4 ){arr[4]=e;return e;}
    else if( n == 5 ){arr[5]=f;return f;}
    else if(n>5){
        arr[n]=( fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6) );
        return arr[n];
    }
}
int main() {
    int n, caseno = 0, cases;
    scanf("%d", &cases);
    while( cases-- ) {
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        for(i=0;i<101;i++){
            arr[i]=-1;
        }
        printf("Case %d: %d\n", ++caseno, fn(n) % 10000007);
    }
    return 0;
}

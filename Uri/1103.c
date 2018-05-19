#include<stdio.h>
int main (){
    int h1=1,h2=1,m1=1,m2=1,min=0;
    while(1){
        scanf("%d%d%d%d",&h1,&m1,&h2,&m2);
        if(h1==0&&h2==0&&m1==0&&m2==0){
            break;
        }
        h1++;
        h2++;
        m1++;
        m2++;
        if(h2>=h1){
            if(m2>=m1){
                min=(h2-h1)*60;
                min+=(m2-m1)*1;
            }else{
                min=(h2-h1)*60;
                if(min==0){
                    min=1440;
                }
                min+=(m2-m1);
            }
        }else{
            if(m2>=m1){
                min=((24-h1)*60)+(h2*60);
                min+=(m2-m1)*1;
            }else{
                min=((24-h1)*60)+(h2*60);
                min+=(m2-m1);
            }
        }
        printf("%d\n",min);min=0;
    }
    return 0;
}

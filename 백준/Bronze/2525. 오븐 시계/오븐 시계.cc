#include<stdio.h>

int main() {
    int h,m,p,m2;
    scanf("%d %d %d",&h,&m,&p);
    if (m+p<60){
        m2=m+p;
    }
    if (m+p>=60){
        m2 = (m+p)%60;
        h =h+(m+p)/60;
        if (h>=24){
            h -= 24;
        }
    }
    printf("%d %d",h,m2);
    return 0;
}

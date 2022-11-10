#include<stdio.h>

int main() {
    int H,M,H2,M2;
    scanf("%d %d",&H,&M);
    if (M>=45){
        M2=M-45;
        H2=H;
    }
    if (M<45){
        M2=M+60-45;
        H2=H-1;
        if (H2<0){
            H2+=24;
        }
    }
    printf("%d %d",H2,M2);
    return 0;
}

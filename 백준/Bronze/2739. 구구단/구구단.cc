#include <stdio.h>

int main() {
    int a;
    int b=1;
    scanf("%d",&a);
    for (int i=0;i<9;i++){
        printf("%d * %d = %d \n",a,b,a*b);
        b++;
    }
}


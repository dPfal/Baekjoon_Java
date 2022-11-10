#include<stdio.h>

int main() {
    int a;
    scanf("%d",&a);

    if (90<=a&& a<=100){
        printf("A");
    }
    if (80<=a && a<=89){
        printf("B");
    }
    if (70<=a&& a<=79){
        printf("C");
    }
    if (60<=a&&a<=69){
        printf("D");
    }
    if (a<60){
        printf("F");
    }
    return 0;
}

#include <stdio.h>

int main() {
    int a,b;
    int count =0 ;
    scanf("%d",&a);
    b=a;
    while(1){
        a = (a% 10) * 10 + ((a/ 10) + (a % 10)) % 10;
        count++;
        if(b==a){
            printf("%d",count);
            break;
        }


    }
    return 0;
}


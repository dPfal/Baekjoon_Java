#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);

   for(int row = 1; row <= n; row++) {

	// 공백은 N - row개 만큼 출력한다.
	for(int i = 0; i < n - row; i++) {
		printf(" ");
	}

	// 별은 row개만큼 출력한다.
	for(int i = 0; i < row; i++) {
		printf("*");
	}

	// 한 행의 출력이 끝나면 개행(줄바꿈)
	printf("\n");
}
}

#include <stdio.h>

int main(){

	int x;

	printf("Enter some number: \n");
	scanf("%d", &x);

	if(x > 1000){
		printf("Numero maior que 1000");
	}else {
		printf("Numero menor que 1000");
	}

	return 0;
}

#include <stdio.h>

float main(){
	float a, b;
	printf("Digite um número real: \n");
	scanf("%f", &a);
	printf("Digite outro número real: \n");
	scanf("%f", &b);

	if(a>0 && b>0){
		printf("São valores válidos");
	}else {
		printf("São valores inválidos");
	}

}

#include<stdio.h>

double main(){
	double x, y, r;
	printf("Digite um número: ");
	scanf("%lf", &x);
	printf("Digite outro número: ");
	scanf("%lf", &y);
	printf("%lf e %lf\n", x, y);
	if(y!=0){
		r = x / y;
		printf("resultado: %lf", r);
	}else{
		printf("o segundo número não pode ser igual a zero, tente novamente!");
	}
	return 0;
}

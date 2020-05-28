#include <stdio.h>

float main(){
	float salario, salarionovo;
	int cargo;
	printf("Informe o salário atual em R$: \n");
	scanf("%f", &salario);
	
	printf("Informe o cargo\n");
	printf("1 - Técnico\n");
	printf("2 - Gerente\n");
	printf("3 - Outros\n");
	scanf("%d", &cargo);
	
	switch(cargo)
{
	case 1:
		salarionovo = salario + salario * 0.5;
		printf("O novo salario do técnico é de R$ %.2f", salarionovo);
	break;
	case 2:
		salarionovo = salario + salario * 0.3;
		printf("O novo salario do gerente é de R$ %.2f", salarionovo);
	break;
	case 3:
		salarionovo = salario + salario * 0.2;
		printf("O novo salario é de R$ %.2f", salarionovo);
	break;
	default: printf("Cargo inválido");
}

}

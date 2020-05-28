#include <stdio.h>

int main (){
	int  epoca;
	printf("Informe o trimestre atual: \n");
	scanf("%d", &epoca);

	switch(epoca)
	{
	case 1: printf("INVERNO");
	break;
	case 2: printf("VERÃO");
	break;
	case 3: printf("VERÃO");
	break;
	case 4: printf("INVERNO");
	break;
	default: printf("Opção informada inválida");
	}
	return 0;
}

#include <stdio.h>

float main(){

float a, b;
char s;

printf("--------------Calculadora--------------\n");

printf("Digite primeiro número: \n");
scanf("%f", &a);
printf("Digite segundo número: \n");
scanf("%f", &b);
printf("Informe o sinal da operação: \n");
scanf("%s", &s);

switch(s)
{
case '+':
	printf("O resultado da soma é igual: %.2f \n", a + b);
break;
case '-':
	printf("O resultado da subtração é igual: %.2f \n", a - b);
break;
case '*':
	printf("O resultado da multiplicação é igual: %.2f \n", a * b);
break;
case '/':
	printf("O resultado da divisão é igual: %.2f \n", a / b);
break;

default: printf("Sinal inválido");

}


}

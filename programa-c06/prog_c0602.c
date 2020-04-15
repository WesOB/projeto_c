#include <stdio.h>

int main(){

float p1, p2, p3;
	printf("Digite seu peso:\n");
	scanf("%f",&p1);
	printf("Digite o peso de uma amigo seu:\n");
	scanf("%f",&p2);
	printf("Digite o peso de mais um amigo seu:\n");
	scanf("%f",&p3);
	printf("Seu peso é %.1f kg\n", p1);
	printf("O peso do seu amigo é %.1f kg\n", p2);
	printf("O peso de seu outro amigo é %.1f kg\n", p3);
}

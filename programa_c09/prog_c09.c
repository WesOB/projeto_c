#include <stdio.h>

int main(){

int idade;

	printf("Informe a sua idade:");
	scanf("%d", &idade);

	if (idade<20){
		if(idade<12){
		printf("Criança");
		}else{
		printf("Adolescente");
		}
	}else if(idade<60)
	 printf("Adulto(a)");	
	else 
	 printf("Idoso(a)");
	
}

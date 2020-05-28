#include <stdio.h>

float main(){

int soma, cont, n;
float media;
cont=0;
soma=0;
printf("Digite um número inteiro: \n");
scanf("%d", &n);

while(n!=0){
cont = cont + 1;
soma = soma + n;
printf("Digite um número inteiro: \n");
scanf("%d", &n);
}
media = soma/cont;
printf("A média é: %.2f\n", media);

}

#include <stdio.h>
#include<trim>
int main(){
char nome[20];
int mat;

printf("Informe seu nome:\n");
fgets(nome,20,stdin);
printf("Informe sua matricula:\n");
scanf("%d", &mat);

printf("Matricula: %d\n", mat);
printf("Nome: %s\n", nome);

//puts(nome);

}

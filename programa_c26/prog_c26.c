#include <stdio.h>

int main(){
char s[30]; //o tamanho poderia ser outro
int i=0;
	printf("Digite uma string: \n");
	fgets(s,20,stdin);
	//imprime cada caractere da cadeia lida
//	for(i=0;s[i]!='\0';i++){
	for(i=20;i>=0;i--){
		printf("%c", s[i]);
	}

}

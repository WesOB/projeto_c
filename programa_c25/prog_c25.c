#include<stdio.h>

int main(){
char s[20];
	printf("Digite uma string: \n");
//	gets(s);
	fgets(s,20,stdin);
	printf("String digitada: ");
	puts(s);
return 0;

}

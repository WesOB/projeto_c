#include <stdio.h>

int main(){
int a;
printf("Digite um número inteiro:\n");
scanf("%d", &a);
if(a%2==0){
	printf("O número %d é par", a);
}else{
	printf("O número %d é impar", a);
}
return 0;

}

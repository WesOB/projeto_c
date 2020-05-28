#include <stdio.h>

int main(){
int n, q;

printf("Digite um número inteiro: \n");
scanf("%d", &n);
while(n != 0)
{
	q = n * n;	
	printf("O quadrado de %d é %d\n", n,q);
	printf("Digite um número inteiro: \n");
	scanf("%d", &n);
}

}

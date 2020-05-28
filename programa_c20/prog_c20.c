#include <stdio.h>
#define n 5

float main(){

float a[5], b[5], x;
int i;

for(i=0;i<n;i++){
	printf("Digite o %dº número: \n", i+1);
	scanf("%f", &a[i]);
}
printf("Digite um numero escalar: \n");
scanf("%f", &x );

for(i=0;i<n;i++){
	b[i] = a[i]*x;
	printf("O %dº número é: %.2f \n", i+1, b[i]);
}

}

#include <stdio.h>

int main(){
int mat[10], i;

for(i=0;i<10;i++){
	printf("Digite a matrculoa do aluno %d: \n", i+1);
	scanf("%d", &mat[i]);
}
printf("valor de i: %d \n", i);

for(i=0;i<10;i++){
	printf("A matricula do aluno %d é %d \n", i, mat[i]);
}
}

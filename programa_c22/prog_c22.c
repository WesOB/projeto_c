#include <stdio.h>

int main(){

int i,j, a[2][2],b[2][2],r[2][2];

printf("Adicione Valores as Matrizes\n\n\n");

for(i=0;i<2;i++){
	for(j=0;j<2;j++){
		printf("adicione um valor ao vetor a[%d][%d]:\n", i, j);
		scanf("%d", &a[i][j]);
	}
}

for(i=0;i<2;i++){
	for(j=0;j<2;j++){
		printf("adicione um valor ao vetor b[%d][%d]:\n", i, j);
		scanf("%d", &b[i][j]);
	}
}

for(i=0;i<2;i++){
	for(j=0;j<2;j++){
		r[i][j] = a[i][j] + b[i][j];
		printf("%d   ", r[i][j]);
//		scanf("%f", a[i][j]);
	}
	printf("\n");
}


}

#include <stdio.h>

int main(){
int x[3][3], i, j;

for(i=0;i<3;i++)
	for(j=0;j<3;j++)
		x[i][j] = i*(j+1);

for(i=0;i<3;i++)
	x[i][j] = x[2][i];
for(i=0;i<3;i++)
	for(i=0;i<3;i++)
		printf("%d \n", x[i][j]);
	printf("\n");

}

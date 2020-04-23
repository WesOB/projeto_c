#include<stdio.h>

int main(){

int a, b, m;

	printf("Digite dois números inteiros:");
	scanf("%d %d",&a,&b);
	m=a;
	if (a>b) m=b;
	printf("O menor número é %d", m);
return 0;

}

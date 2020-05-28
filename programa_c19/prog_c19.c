#include <stdio.h>

int main(){

int i, x[5];

for(i=0;i<+5;i++)
	x[i]=2;
for(i=0;i<+5;i++)
	x[i]=x[i]*i;
for(i=0;i<+5;i++)
	printf("%d\n", x[i]);

return 0;

}

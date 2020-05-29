//Copia d cadeia de strings
#include<stdio.h>

int main(){
char orig[50], dest[50];

int i;

printf("Digite uma String:\n ");
fgets(orig,50,stdin);
for(i=0;orig[i]!='\0';i++){
	dest[i]=orig[i];
}
dest[i]='\0';
puts(dest);
return 0;
}

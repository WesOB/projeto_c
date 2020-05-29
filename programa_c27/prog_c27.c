#include <stdio.h>


int main(){
char s[20];
int i, n=0;
printf("Digite uma string: \n");
fgets(s, 30, stdin);

for(i=0;s[i]!='\0';i++){
	n++;
}
printf("O tamanho de \"%s\" é : %d",s,n);
return 0;


}

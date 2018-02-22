#include <stdio.h>
 int main(){
 	int n1, n2, n3, n4, soma;
 	float media;
 	printf("leia as notas: \n");
 	scanf("%i %i %i %i",&n1,&n2,&n3,&n4);
 	soma=n1+n2+n3+n4;
 	media=soma/4.0;
 	printf("a media calculalda e: %.2f\n",media);
 	if (media>=6)
 		printf("aprovado");
 	else
 		printf("reprovado");
 	
 	
 	
 	
 	
 	
 	
 	return 0;
 }
 

/*
	Entrada:  n1, n2, n3, n4, n5, media
	Processamento: Programa que calcule a média de 5 notas de um aluno. 
	Saída: media de 5 notas
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	float n1, n2, n3, n4, n5, media;
	
	printf("\n-------------------------------------\n");
	printf("Media de notas");
	printf("\n-------------------------------------\n");
	
	printf("Informe a primeira nota: ");
	scanf("%f", &n1);
	
	printf("Informe a segunda nota: ");
	scanf("%f", &n2);
	
	printf("Informe a terceira nota: ");
	scanf("%f", &n3);
	
	printf("Informe a quarta nota: ");
	scanf("%f", &n4);
	
	printf("Informe a quinta nota: ");
	scanf("%f", &n5);
	
	media = (n1+n2+n3+n4+n5)/5;
	
	printf("Media: %.2f ", media);
		
    return 0;
}


//Questão 2 - Escreva um programa que pergunte qual o raio de um círculo e imprima a sua área.

#include <stdio.h>

int main(void)
{
	float raio, pi=3.14, area;
	
	printf("Digite o valor do raio = ");
	scanf("%f", raio);
	
	area = pi * raio * raio;
	
	printf(" Area = %2f m2 \n", area);
	
	return 0;
}


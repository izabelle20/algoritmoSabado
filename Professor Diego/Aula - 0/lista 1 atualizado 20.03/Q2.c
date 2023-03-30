//Questão 2 - Escreva um programa que pergunte qual o raio de um círculo e imprima a sua área.

#include <stdio.h>

int main(void)
{
	float raio, pi, area;
	
	printf("Digite o valor do raio = ");
	scanf("%f", raio);
	
	pi=3.14;
	area = pi * raio * raio;
	printf("A area e : %d", area);
	
	return 0;
}


//Quest�o 2 - Escreva um programa que pergunte qual o raio de um c�rculo e imprima a sua �rea.

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


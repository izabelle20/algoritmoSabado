//Quest�o 4 - Escreva um algoritmo para ler as dimens�es de um ret�ngulo (base e altura), calcular e escrever a �rea do ret�ngulo. 

#include <stdio.h>

int main(void)
{
	int base, area, altura;
	
	printf("Informe o valor da base: ");
	scanf("%d", &base);

	printf("Informe o valor da altura: ");
	scanf("%d", &altura);

	area = (base*altura);
	printf("A area do retantulo e : %d", area);
	
	return 0;
}

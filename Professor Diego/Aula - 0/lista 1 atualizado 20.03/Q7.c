//Quest�o 7 - O custo de um carro novo ao consumidor � a soma do custo de f�brica com a porcentagem do distribuidor e dos impostos (aplicados ao custo de f�brica). Supondo que o percentual do distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo para ler o custo de f�brica de um carro, calcular e escrever o custo final ao consumidor. 

#include <stdio.h>

int main(void)
{
	int pocentualDistribuidor, pocentualImposto;
	float fabrica, distribuidor, imposto, consumidor;
	
	pocentualDistribuidor=28;
	pocentualImposto=45;
	
	printf("Informe o valor de custo de fabrica: ");
	scanf("%d", fabrica);
	
	distribuidor = fabrica + (fabrica * pocentualDistribuidor / 100);
	imposto = fabrica + (fabrica * pocentualImposto / 100);
	consumidor = fabrica + distribuidor + imposto;
	
	printf("Informe o custo do consumidor e: ");
	scanf("%d", fabrica);
	
	return 0;
}

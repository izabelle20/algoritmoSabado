//Quest�o 6 - Escreva um algoritmo para ler o sal�rio mensal atual de um funcion�rio e o percentual de reajuste. Calcular e escrever o valor do novo sal�rio.

#include <stdio.h>

void main() {

 float salario, reajuste, novoSalario;

 printf("Informe o salario mensal:\n");

 scanf("%f", &salario);

 printf("\nInforme o percentual de reajuste:\n");

 scanf("%f", &reajuste);

 novoSalario = salario + (salario * (reajuste / 100));

 printf("\n\nSalario novo = R$ %.2f", novoSalario);
}

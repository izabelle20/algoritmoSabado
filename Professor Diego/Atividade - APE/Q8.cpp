//Questão 8 - Uma revendedora de carros usados paga a seus funcionários vendedores um salário fixo por mês, mais uma comissão também fixa para cada carro vendido e mais 5% do valor das vendas por ele efetuadas. Escrever um algoritmo que leia o número de carros por ele vendidos, o valor total de suas vendas, o salário fixo e o valor que ele recebe por carro vendido. Calcule e escreva o salário final do vendedor. 
#include <stdio.h>

int main(int argc, char * * argv) {

float vendas, salariofixo, comissao, salario;

int carros;

printf("Informe o numero de carros vendidos: ");

scanf("%d", & carros);

printf("Informe o valor total de suas vendas: ");

scanf("%f", & vendas);

printf("Informe o salario fixo: ");

scanf("%f", & salariofixo);

printf("Informe o valor por carro vendido: ");

scanf("%f", & comissao);

salario = salariofixo + (comissao * carros) + (vendas * 0.05);

printf("\nSalario final do vendedor: [%0.2f]\n\n", salario);

system("pause");

return 0;

}

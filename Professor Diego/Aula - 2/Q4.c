/*
	Entrada: salario, prestacao, pocentagem.
	Enunciado: Faça um programa que leia o salário de um trabalhador e o valor da     prestação de um empréstimo. Se a prestação, for maior que 20% do salário, imprima: “Empréstimo não concedido.”, caso contrário, imprima: “Empréstimo concedido.”
	Saída: consedido e nao concedido.
*/

#include <stdio.h>

int main(){
	
    float salario, prestacao, pocentagem;
    
    printf("------------------------------\n");
    printf("     Simulado de Empresimo\n"    );
    printf("------------------------------\n");
    
	printf("Informe o valor do salario: ");
	scanf("%f", &salario);
	
	printf("Informe o valor da prestacao: ");
	scanf("%f", &prestacao);
	
	printf("salario: %.2f , prestacao: %,2f\n\n", salario, prestacao);
	
	pocentagem = salario*0.2;	
	
	if(prestacao <= pocentagem){
		printf("Enprestimo concedido\n");
	} else{
		printf("Enprestimo nao concedido\n");
	}

	printf("------------------------------\n");
    printf("Copy (c) 2023 Izabelle Co\n");
    printf("------------------------------\n");
	
    return 0;
}



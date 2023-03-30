/*
	Entrada:  idade
	Processamento: Faça um programa que receba a idade de uma pessoa e se idade menor que 30 aparece a
	mensagem "Você é muito jovem". Caso idade maior que 30 anos, o programa não fará nada.   
	Saída: Idade menor 30, Vove e jovem
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int idade;
	
	printf("\n-------------------------------------\n");
	printf("Idade");
	printf("\n-------------------------------------\n");
	
	printf("Informe a sua idade: ");
	scanf("%d", idade);
		
	if(idade<30){
		printf("Idade menor de 30, voce e jovem");
	} else if(idade>30);{
		exit;
	}
    return 0;
}

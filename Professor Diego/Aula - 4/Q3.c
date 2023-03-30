/*
	Entrada:  idade
	Processamento: Faça um programa que entra com a idade de uma pessoa e se idade maior que 70 anos,
	aparece a mensagem "Novos 50".
	Se idade maior que 21 anos, Adulto. Se idade menor que 21 anos, Jovem.  
	Saída: Novos 50, Adulto e Jovem
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
		
	if(idade>70){
		printf("Novos 50");
	} else if (idade>21 && idade<=70);{
		printf("Adulto");
	} else if(idade<21){
		printf("Jovem");
	}
    return 0;
}

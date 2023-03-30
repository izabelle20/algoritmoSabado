/*
	Entrada:  idade
	Processamento: Elabore um programa para verificação de situação eleitoral, onde será 
	informada somente a idade do eleitor, considere as situações abaixo:
	Menor que 0 não nasceu
	0-15 não vota
	16-17 opcional
	18-65 obrigatório
	exatamente 41- somente ganha prêmio e não vota!!!
	> 65 opcional
	exatamente 88 - somente ganha prêmio e não vota!!!
	- Não utilizar os operadores lógicos || ou &&
	- Utilizar somente estrutura if/else conforme apresentada abaixo
	- Não utilizar switch/case
	- Não utilizar a estrutura "else if"
	Saída: Situacao do eleito
*/

#include <stdio.h>
#include <stdlib.h>
int main(){
	int idade=0;
	
	printf("\n-------------------------------------\n");
	printf("Situacao Eleitoral");
	printf("\n-------------------------------------\n");
	
	printf("Informe a sua idade: ");
	scanf("%d", idade);
		
	if(0==idade){
		printf("Nao nasceu");
	} else(0<idade>17);{
		prinf("Nao vota");
	} 
	
	if(idade>=16){
		printf("Opicional");
	} else(idade>=18);{
		prinft("Obrigatorio");
	}
	
	if(idade=41){
		printf("Somente ganha premio e nao vota");
	} else(idade>65);{
		printf("Opicional");
	} 
	
	if (idade=88){
		printf("Somente ganha premio e nao vota");
	}
    return 0;
}

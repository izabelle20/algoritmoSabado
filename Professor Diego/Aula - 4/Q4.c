/*
	Entrada:  idade
	Processamento: Elabore um programa para verifica��o de situa��o eleitoral, onde ser� 
	informada somente a idade do eleitor, considere as situa��es abaixo:
	Menor que 0 n�o nasceu
	0-15 n�o vota
	16-17 opcional
	18-65 obrigat�rio
	exatamente 41- somente ganha pr�mio e n�o vota!!!
	> 65 opcional
	exatamente 88 - somente ganha pr�mio e n�o vota!!!
	- N�o utilizar os operadores l�gicos || ou &&
	- Utilizar somente estrutura if/else conforme apresentada abaixo
	- N�o utilizar switch/case
	- N�o utilizar a estrutura "else if"
	Sa�da: Situacao do eleito
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

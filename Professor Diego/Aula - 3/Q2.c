/*
	Entrada: idade, operador 
	Processamento: Elaborador uma calculadora, e mostrar o resultado
	Saída: resultado
*/

#include <stdio.h>

int main (Calculadora){

	int n1, n2;
	char operacao;
	
	printf("----------------------");
	printf("Calculadora");
	printf("-------------------------------------");
	
	printf("Informe o primeiro numero: ");
	scanf("%d", n1);
	
	printf("Informe a operacao: ");
	scanf("%c", operacao);
		
	printf("Informe o primeiro numero: ");
	scanf("%d", n2);
	
	
	switch(operacao){
		case '+':
			printf("%d %c %d = %d\n", n1,operacao,n2,n1+n2);
		break;
 
		case '-':
			printf("%d %c %d = %d\n", n1,operacao,n2,n1-n2);
		break;	
 
		case '*':
			printf("%d %c %d = %d\n", n1,operacao,n2,n1*n2);
		break;
 
		case '/':
			if(n2==0){
				printf("Nao existe divisao por zero!\n");
			}else{
				printf("%d %c %d = %d\n", n1,operacao,n2,n1/n2);	
			}
		break;
		default:
			printf("Operacao invalido!\n");
	}
	
	return 0;
}

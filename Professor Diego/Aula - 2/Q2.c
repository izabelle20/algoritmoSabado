/*
	Entrada: num1, num2
	Enunciado: Fa�a um programa que leia dois n�meros e mostre o maior deles. Se, por acaso, os dois n�meros forem iguais, imprima a mensagem     �N�meros iguais�.
	Sa�da: maior 
*/

#include <stdio.h>

int main(){
    int num1=0, num2=0, maior=0;
    printf("------------------------------\n");
    printf("Verificar o valor\n");
    printf("------------------------------\n");
    
	printf("Informe o primeiro: ");
	scanf("%d", &num1);
	
	printf("Informe o segundo: ");
	scanf("%d", &num2);
	
	printf("Entre os valores %d e %d\n",num1, num2);
	
	if(num1==num2){
		printf("Numeros iguais",num1, num2);
	} else{
		if(num1>num2){
			maior = num1;
		} else{
			maior = num2;
		}
	}
	
	printf("Entre os valores %d\n",maior);
	
	printf("------------------------------\n");
    printf("Copy (c) 2023 Izabelle Co\n");
    printf("------------------------------\n");
	
    return 0;
}


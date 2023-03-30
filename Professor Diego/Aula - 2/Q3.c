/*
	Entrada: 
	Enunciado:  Faça um programa que leia um número inteiro e verifique se esse número é par ou ímpar.
	Saída: 
*/

#include <stdio.h>

int main(void)
{
    int n;
    printf("Entre com n -> ");
    scanf("%d", &n);

    (n % 2 == 0) ? printf("%d eh par\n", n)
                 : printf("%d eh impar\n", n); 

    return 0;
}

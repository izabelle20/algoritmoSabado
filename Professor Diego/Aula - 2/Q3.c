/*
	Entrada: 
	Enunciado:  Fa�a um programa que leia um n�mero inteiro e verifique se esse n�mero � par ou �mpar.
	Sa�da: 
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

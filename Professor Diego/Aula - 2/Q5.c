/*
	Entrada: 
	Enunciado: Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre: o número digitado ao quadrado e raiz quadrada do número digitado.
	Saída: 
*/


#include <stdio.h>
#include <math.h>

int main(void)
{
    int n;
    printf("Entre com n -> ");
    scanf("%d", &n);
    
    if(n > 0) {
        printf("[+] Ao quadrado -> %d\n", n*n);
        printf("[+] Raiz quadrada -> %.1f\n", sqrt(n));
    }
    
    return 0;
}

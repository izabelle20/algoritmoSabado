/*
	Entrada: 
	Enunciado: Fa�a um programa que leia um n�mero e, caso ele seja positivo, calcule e mostre: o n�mero digitado ao quadrado e raiz quadrada do n�mero digitado.
	Sa�da: 
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

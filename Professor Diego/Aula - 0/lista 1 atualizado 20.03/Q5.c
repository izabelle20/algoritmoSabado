//Questão 5 - Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e escreva a idade dessa pessoa expressa apenas em dias. Considerar ano com 365 dias e mês com 30 dias.

#include <stdio.h>

int main(){
 
 int anos,  meses, dias, idade;
 
 printf("Digite quantos anos voce tem:  ");
 scanf("%d", &anos);
 printf("Digite quantos meses voce tem:  ");
 scanf("%d", &meses);
 printf("Digite quantos dias voce tem:  ");
 scanf("%d", &dias);
 
 idade = (anos * 365) + (meses * 30) + dias;
 
 printf("Sua idade em dias e %d ", idade);
}

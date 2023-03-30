//Questão 1 - Faça um programa em que o usuário digite o custo de uma determinada mercadoria, em seguida, adiciona-se ao custo o valor do frete e despesas eventuais (também solicitadas pelo teclado). Para concluir, o programa pergunta qual o valor de venda e indica a percentagem de lucro da mercadoria.

#include <stdio.h>

int main(){
 
 float custoMercadoria, custoFrete, despesa, venda, lucro;
 
 printf("Digite o valor da mercadoria:  ");
 scanf("%d", &custoMercadoria);
 printf("Digite o valor do frete:  ");
 scanf("%d", &custoFrete);
 printf("Digite ovalor de dispesas extras:  ");
 scanf("%d", &despesa);
 
 lucro = custoMercadoria + custoFrete + despesa + venda;
 
 printf("O lucro vai ser e %d ", lucro);
} 

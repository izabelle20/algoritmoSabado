//Quest�o 3 -  Fa�a um programa que calcule a quantidade necess�ria de latas de tinta para pintar uma parede. O programa pergunta as medidas de largura e altura da parede em metros e escreve quantas latas de tinta ser�o necess�rias para pint�-la. Considere que o consumo de tinta � de 300 ml por metro quadrado e a quantidade de tinta por lata � de 2 litros.

int main(){
 
 float quantidadelatas, largura, altura, consumo;
 
 printf("Digite o valor da largura:  ");
 scanf("%d", &largura);
 printf("Digite o valor da altura:  ");
 scanf("%d", &altura);
 
 quantidadelatas = altura * largura;
 printf("A quantidade de latas e %d:  ", quantidadelatas);
 
 consumo = 300 * 2; 
 
 return 0;
 
} 

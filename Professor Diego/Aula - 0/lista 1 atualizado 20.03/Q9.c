//Quest�o 9 - Fa�a um algoritmo que leia tr�s notas de um aluno, calcule e escreva a m�dia final deste aluno. Considerar que a m�dia � ponderada e que o peso das notas � 2, 3 e 5. F�rmula para o c�lculo da m�dia final �: 

int main(void)

{
   float n1, n2, n3, p1, p2, p3, media;

   printf("Insira o valor da primeira nota: ");
   scanf("%f", &n1);

   printf("Insira o peso da primeira nota: ");
   scanf("%f", &p1);

   printf("Insira o valor da segunda nota: ");
   scanf("%f", &n2);

   printf("Insira o peso da segunda nota: ");
   scanf("%f", &p2);

   printf("Insira o valor da terceira nota: ");
   scanf("%f", &n3);

   printf("Insira o peso da terceira nota: ");
   scanf("%f", &p3);

   media = (n1*p1 + n2*p2 + n3*p3)/(p1+p2+p3);
   printf("A media e: %.2f \n\n", media);
   
   system("pause");

   return 0;

}




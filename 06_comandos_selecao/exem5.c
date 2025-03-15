#include <stdio.h>


int main() {
   int numero;
   // Solicita ao usuário para inserir um número
   printf("Digite um número entre 1 e 3: ");
   scanf("%d", &numero);
   // Switch case para verificar o número inserido
   switch (numero) {
       case 1:
           printf("Você digitou o número 1.\n");
           break;
       case 2:
           printf("Você digitou o número 2.\n");
           break;
       case 3:
           printf("Você digitou o número 3.\n");
           break;
       default:
           printf("Número fora do intervalo esperado.\n");
           break;
   }
   return 0;
}

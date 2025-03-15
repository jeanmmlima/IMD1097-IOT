#include <stdio.h>

int main() {
   int numero;
   // Solicita ao usuário que insira um número
   printf("Digite um numero: ");
   scanf("%d", &numero);
   // Verifica se o número é par ou ímpar
   if (numero % 2 == 0) {
       printf("O numero é par.\n");
   } else {
       printf("O numero é impar.\n");
   }
   return 0;
}

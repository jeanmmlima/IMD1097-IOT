#include <stdio.h>

int main() {
   int numero;
   // Solicita ao usuário que insira um número
   printf("Digite um numero: ");
   scanf("%d", &numero);

   // Verifica se o número é positivo
   if (numero > 0) {
       printf("O numero e positivo.\n");
   }
   return 0;
}

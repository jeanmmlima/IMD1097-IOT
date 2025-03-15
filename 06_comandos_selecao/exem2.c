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
   // Verifica se o número é negativo
   if (numero < 0) {
       printf("O numero e negativo.\n");
   }
   // Verifica se o número é zero
   if (numero == 0) {
       printf("O numero e zero.\n");
   }
   return 0;
}

#include <stdio.h>


int main() {
   int numero; 

   printf("Digite um número maior que 0 (ou 0 para sair): ");
   scanf("%d", &numero);  // Lê o número inicial

   // Loop while continua enquanto o número não for igual a 0
   while (numero != 0) {
      
       // Verifica se o número é positivo
       if (numero > 0) {
           printf("Você digitou: %d\n", numero);
       }
       // Caso contrário, o número é negativo
       else {
           printf("Por favor, digite um número positivo!\n");
       }
       // Lê o próximo número até que 0 seja digitado para sair
       printf("Digite outro número (ou 0 para sair): ");
       scanf("%d", &numero); 
   }
   return 0; 
}

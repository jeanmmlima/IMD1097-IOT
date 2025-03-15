#include <stdio.h>


int main() {
   int x, y;
   // Solicita ao usuário que insira os valores de x e y
   printf("Digite o valor de x: ");
   scanf("%d", &x);

   printf("Digite o valor de y: ");
   scanf("%d", &y);
   if (x > 0) {  // Primeira condição
       if (y > 15) {  // Segunda condição, aninhada na primeira
           printf("x é positivo e y é maior que 15\n");
       } else {
           printf("x é positivo, mas y não é maior que 15\n");
       }
   } else {
       printf("x não é positivo\n");
   }
   return 0;
}

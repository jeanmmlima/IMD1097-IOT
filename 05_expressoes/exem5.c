#include <stdio.h>

int main() {
   int a = 5;
   int b = 10;
   int c = 0;
   // Exemplo de AND lógico (&&)
   int resultado_and = (a > 0 && b > 0); // verdadeiro, pois a > 0 e b > 0
   printf("Resultado de (a > 0 && b > 0): %d\n", resultado_and);

   // Exemplo de OR lógico (||)
   int resultado_or = (a > 0 || c > 0); // verdadeiro, pois a > 0 (c > 0 é falso)
   printf("Resultado de (a > 0 || c > 0): %d\n", resultado_or);

   // Exemplo de NOT lógico (!)
   int resultado_not = !(a > 0); // falso, pois a > 0 é verdadeiro, mas ! inverte para falso
   printf("Resultado de !(a > 0): %d\n", resultado_not);

   return 0;
}

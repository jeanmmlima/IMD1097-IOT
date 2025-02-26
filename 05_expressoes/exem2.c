#include <stdio.h>


int main() {
   int a = 7;
   int b = 2;
   int resultadoInt;
   float resultadoFloat;

   // Divisão inteira, resultado é truncado
   resultadoInt = a / b;
   printf("Resultado da divisao inteira (7 / 2): %d\n", resultadoInt);

   // Divisão com casting para float
   resultadoFloat = (float)a / b;
   printf("Resultado da divisao com cast (float) (7 / 2): %.2f\n", resultadoFloat);

   return 0;
}

#include <stdio.h>
#include <math.h>

int main() {
   double num, raiz, potencia, logaritmo, seno;
   // Solicita ao usuário que insira um número
   printf("Digite um número: ");
   scanf("%lf", &num);
   // Calcula a raiz quadrada, a potência, o logaritmo natural e o seno
   raiz = sqrt(num);
   potencia = pow(num, 2); // numˆ2 (num elevado a 2)
   logaritmo = log(num);
   seno = sin(num);
   // Exibe os resultados
   printf("Raiz quadrada de %.2f: %.2f\n", num, raiz);
   printf("%.2f elevado ao quadrado: %.2f\n", num, potencia);
   printf("Logaritmo natural de %.2f: %.2f\n", num, logaritmo);
   printf("Seno de %.2f (em radianos): %.2f\n", num, seno);

   return 0;
}

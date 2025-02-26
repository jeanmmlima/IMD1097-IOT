#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    // Usando operadores relacionais
    printf("Comparando a (%d) e b (%d):\n", a, b);
    printf("a == b: %d\n", a == b); // Igual a
    printf("a != b: %d\n", a != b); // Diferente de
    printf("a > b: %d\n", a > b);   // Maior que
    printf("a < b: %d\n", a < b);   // Menor que

    int resultado1 = a >= b;
    int resultado2 = a <= b;

    printf("a >= b: %d\n", resultado1); // Maior ou igual a
    printf("a <= b: %d\n", resultado2); // Menor ou igual a

    return 0;
}

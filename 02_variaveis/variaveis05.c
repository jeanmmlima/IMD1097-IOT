#include <stdio.h>

int main() {
    // Definição de variáveis
    int numero = 42;          // Inteiro
    float decimal = 3.1415;   // Float
    char caractere = 'A';     // Caractere

    // Impressão com printf e especificadores de formato
    printf("Número inteiro: %d\n", numero);        // %d para inteiros
    printf("Número decimal: %.2f\n", decimal);     // %f para floats (com 2 casas decimais)
    printf("Caractere: %c\n", caractere);          // %c para caracteres

    return 0;
}
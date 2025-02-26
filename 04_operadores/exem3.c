#include <stdio.h>

int main() {
    unsigned char a = 99;  // 01100011 em binário
    unsigned char b = 77;  // 01001101 em binário
    // AND bit a bit
    printf("a & b = %u\n", a & b);   // 01000001 em binário, resultado: 65
    // OR bit a bit
    printf("a | b = %u\n", a | b);   // 01101111 em binário, resultado: 111
    // XOR bit a bit
    printf("a ^ b = %u\n", a ^ b);   // 00101110 em binário, resultado: 46
    // Complemento de um
    printf("~a = %u\n", (unsigned char) ~a); // 10011100 em binário (se for 8 bits), resultado: 156
    // Deslocamento à esquerda
    printf("a << 1 = %u\n", a << 1); // 11000110 em binário, resultado: 198
    // Deslocamento à direita
    printf("a >> 1 = %u\n", a >> 1); // 00110001 em binário, resultado: 49
    return 0;
}

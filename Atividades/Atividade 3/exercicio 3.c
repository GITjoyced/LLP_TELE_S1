// 1. O que é Manipulação de Bits?

// envolve a alteração de bits individuais em um número binário. Isso pode ser feito por meio de várias operações, incluindo as operações lógicas AND, OR e XOR, bem como deslocamentos de bits para a esquerda e para a direita

// 2. Qual a Importância da Manipulação de Bits?

// A manipulação de bits é uma técnica poderosa para otimizar a eficiência e o desempenho do código. Ela permite que os programadores realizem operações complexas de forma rápida e eficiente, melhorando o desempenho do código e reduzindo o uso de recursos.

// 3. Quais são as Operações Básicas de Manipulação de Bits?

// AND, OR, XOR, NOT, e deslocamento para a esquerda e para a direita.

// 4. Exemplo em Linguagem C. Crie um programa  que exibe os bits de um número e realiza operações básicas.

#include <stdio.h>

void exibirBits(int num) {
    int i;
    for (i = sizeof(num) * 8 - 1; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
        if (i % 8 == 0) printf(" ");
    }
    printf("\n");
}

int main() {
    int a = 29;
    int b = 15;

    printf("Número a: %d\n", a);
    printf("Número b: %d\n", b);

    printf("Bits de a: ");
    exibirBits(a);
    printf("Bits de b: ");
    exibirBits(b);

    int and_result = a & b;
    int or_result = a | b;
    int xor_result = a ^ b;
    int not_result = ~a;
    int shift_left_result = a << 2;
    int shift_right_result = a >> 2;

    printf("\nResultados das operações:\n");
    printf("a & b: %d\n", and_result);
    printf("a | b: %d\n", or_result);
    printf("a ^ b: %d\n", xor_result);
    printf("~a: %d\n", not_result);
    printf("a << 2: %d\n", shift_left_result);
    printf("a >> 2: %d\n", shift_right_result);

    printf("\nBits dos resultados:\n");
    printf("Bits de a & b: ");
    exibirBits(and_result);
    printf("Bits de a | b: ");
    exibirBits(or_result);
    printf("Bits de a ^ b: ");
    exibirBits(xor_result);
    printf("Bits de ~a: ");
    exibirBits(not_result);
    printf("Bits de a << 2: ");
    exibirBits(shift_left_result);
    printf("Bits de a >> 2: ");
    exibirBits(shift_right_result);

    return 0;
}
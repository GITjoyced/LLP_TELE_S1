#include <stdio.h>

// 1. Escreva um programa que exiba os números pares de 1 a 10 usando um loop `while`.

void exibirNumerosPares() {
  int index = 1;
  while (index <= 10) {
    !(index%2) && printf("%d\n", index);
    index++;
  }
}

// 2. crie um programa que solicite ao usuário que adivinhe um número entre 1 e 100. O programa deve continuar pedindo até que o usuário acerte o número ou digite `-1` para sair.

void adivinharNumero(int num) {
  int palpite;
  do {
    printf("Digite um número de 1 a 100: (-1 para sair)\n");
    scanf("%d", &palpite);
    if (palpite == -1) break;
    if (palpite == num) printf("Parabéns! Você acertou!\n");
  } while (palpite != num);
}

// 3. Escreva um programa que calcule a soma dos primeiros 10 números inteiros positivos usando um loop `for`.

int main() {
    int soma = 0;

    for (int i = 1; i <= 10; i++) {
        soma += i;
    }

    printf("A soma dos primeiros 10 números inteiros positivos é: %d\n", soma);

    return 0;
}
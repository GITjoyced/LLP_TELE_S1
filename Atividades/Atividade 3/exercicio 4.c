//Atividade 1: Exibir números pares de 1 a 10 usando while
void verificarNumero()
 {
  int num;
  printf("Digite um número inteiro a ser verificado: ");
  scanf("%d", &num);
  if (num > 0) printf("O número %d é maior que zero\n", num);
  if (num < 0) printf("O número %d é menor que zero\n", num);
  if (num == 0) printf("O número %d é igual que zero\n", num);
}

//Atividade 2: Solicitar ao usuário que adivinhe um número entre 1 e 100 usando do while
void verificarAnoBissexto(int ano) 
{
  if (ano && !(ano%4) && (ano%100 || !(ano%400))) printf("O ano %d é bissexto\n", ano);
  else printf("O ano %d não é bissexto\n", ano);
}

//Atividade 3: Calcular a soma dos primeiros 10 números inteiros positivos usando for
void contarDiaDaSemana(int num)
 {
  char diasDaSemana[7][14] = {
    "domingo",
    "segunda-feira",
    "terça-feira",
    "quarta-feira",
    "quinta-feira",
    "sexta-feira",
    "sábado",
};

  switch(num) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      printf("O dia da semana associado ao número %d é: %s\n", num, diasDaSemana[num-1]);
    break;
    default:
      printf("Número inválido\n");
    break;
  }
}

//4. Atividade com Operador Ternário:
//- Descrição: Escreva um programa que leia dois números inteiros e exiba o maior deles usando o operador ternário.
void exibirMaiorNumero(int a, int b) {
  int maior = a > b ? a : b;
  printf("O maior número entre %d e %d é: %d\n", a, b, maior);
}

int main() {
  verificarNumero();
  verificarNumero();
  verificarNumero();
  verificarAnoBissexto(0);
  verificarAnoBissexto(4);
  verificarAnoBissexto(100);
  verificarAnoBissexto(400);
  contarDiaDaSemana(0);
  contarDiaDaSemana(1);
  contarDiaDaSemana(2);
  contarDiaDaSemana(3);
  contarDiaDaSemana(4);
  contarDiaDaSemana(5);
  contarDiaDaSemana(6);
  contarDiaDaSemana(7);
  exibirMaiorNumero(10, 20);
  return 0;
}


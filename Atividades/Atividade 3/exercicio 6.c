//Atividade 1: Ler 5 números inteiros e calcular a soma usando Array Unidimensional
void exibirSoma() {
  int num;
  int index;
  int resultado = 0;
  for (index = 1; index <= 5; index += 1){
    printf("Digite o %dº número a ser somado: ", index);
    scanf("%d", &num);
    resultado += num;
  }
  printf("A soma dos 5 números é: %d\n", resultado);
}
//Atividade 2: Ler uma matriz 3x3 e calcular a soma dos elementos da diagonal principal usando Array Multidimensional
int matriz[3][3] = {
  {1, 7, 2},
  {19, 35, 10},
  {8, 52, 9},
};

void calcularDiagonalPrincipal(int matriz[3][3]) {
  int i,j;
  int resultado = 0;
  for (i = 0; i < 3; i += 1) {
    for (j = 0; j < 3; j += 1)
      if(i==j) resultado += matriz[i][j];
  }
  printf("A soma dos valores na diagonal principal é: %d\n", resultado);
}

int main() {
  exibirSoma();
  calcularDiagonalPrincipal(matriz);
  return 0;
}
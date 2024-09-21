#include <stdio.h>
#include <string.h>

#define MAX_PRODUCTS 100

typedef struct {
    int code;
    char description[50];
    float unitPrice;
    int stockQuantity;
    float stockValue;
} Product;

Product products[MAX_PRODUCTS];
int numProducts = 0;

void displayMenu() {
    printf("-------------------------------------------\n");
    printf("Sistema de Estoque\n");
    printf("-------------------------------------------\n");
    printf("1) Entrada de Produtos\n");
    printf("2) Listar os Produtos\n");
    printf("3) Valor Total do Estoque\n");
    printf("4)  Fim\n");
    printf("Opção: ");
}

void registerProduct() {
    if (numProducts < MAX_PRODUCTS) {
        printf("-------------------------------\n");
        printf("Entrada de Cadastro de Produtos\n");
        printf("--------------------------------\n");
        printf("Código: ");
        scanf("%d", &products[numProducts].code);
        printf("Descrição: ");
        scanf("%49s", products[numProducts].description);
        printf("Valor Unitário: ");
        scanf("%f", &products[numProducts].unitPrice);
        printf("Qtd Estoque: ");
        scanf("%d", &products[numProducts].stockQuantity);
        products[numProducts].stockValue = products[numProducts].unitPrice * products[numProducts].stockQuantity;
        printf("Valor Estoque: %.2f\n", products[numProducts].stockValue);
        int option;
        printf("Digite (1-Para Gravar, 2-Voltar a tela inicial) : ");
        scanf("%d", &option);
        if (option == 1) {
            numProducts++;
            printf("Produto cadastrado com sucesso!\n");
        } else {
            printf("Operação cancelada.\n");
        }
    } else {
        printf("Erro: Limite de produtos alcançado.\n");
    }
}

int main() {
    int option;
    do {
        displayMenu();
        scanf("%d", &option);
        switch (option) {
            case 1:
                registerProduct();
                break;
            case 2:
                // Listar os Produtos (to be implemented)
                break;
            case 3:
                // Valor Total do Estoque (to be implemented)
                break;
            case 4:
                printf("Fim do programa.\n");
                break;
            default:
                printf("Opção inválida.\n");
        }
    } while (option != 4);
    return 0;
}
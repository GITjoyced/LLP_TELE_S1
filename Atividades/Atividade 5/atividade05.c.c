#include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    char input[200]; 

    file = fopen("output.txt", "w");
    if (file == NULL) {
        printf("Erro ao abrir arquivo!\n");
        return 1;
    }

    printf("Digite linhas de texto (ou 'sair' para parar):\n");
    while (1) {
        fgets(input, 200, stdin);

        if (strcmp(input, "sair\n") == 0) {
            break;
        }

        fprintf(file, "%s", input);
    }

    fclose(file);

    file = fopen("output.txt", "r");
    if (file == NULL) {
        printf("Erro ao abrir arquivo!\n");
        return 1;
    }

    printf("\nConteúdo do arquivo:\n");
    while (fgets(input, 200, file) != NULL) {
        printf("%s", input);
    }


    fclose(file);

    return 0;
}
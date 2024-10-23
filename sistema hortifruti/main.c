#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct {
    char cod[5];
    char nome[30];
    float valor;
} Produtos;

int main() {
    setlocale(LC_ALL, "Portuguese");
    system("chcp 65001");
    int i = 0;
    Produtos produto[100];

    FILE *file;
    file = fopen("bin\\Debug\\produtos.txt", "r");

    if (file == NULL) {
        perror("Erro ao tentar abrir arquivo\n");
        system("pause");
        return 0;
    }

    char linha[100];
    while (fgets(linha, sizeof(linha), file)) {
        if (linha[0] == '\n' || linha[0] == '\r') continue;
        sscanf(linha, "%[^,],%[^,],%f", produto[i].cod, produto[i].nome, &produto[i].valor);
        i++;
    }

    fclose(file);
    printf("Produtos cadastrados no hortifruti:\n");

    for (int j = 0; j < i; j++) {
        printf("%s %s %.2f\n", produto[j].cod, produto[j].nome, produto[j].valor);
    }

    printf("\nDeseja iniciar uma compra? Digite 1: ");

    int continuar = 1;
    scanf("%i", &continuar);

    if (continuar != 1) {
        printf("Sistema fechando...\n");
        return 0;
    }

    char codigo[5];
    float peso, total;
    float compra = 0;

    while (continuar == 1) {
        printf("Digite o código do produto: ");
        scanf("%4s", codigo);

        int encontrado = 0;
        int j = 0;

        while (j < i) {
            if (strcmp(codigo, produto[j].cod) == 0) {
                printf("Produto: %s\n", produto[j].nome);
                encontrado = 1;
                break;
            }

            j++;
        }

        if (!encontrado) {
            printf("Código do produto não encontrado. Digite novamente: ");
        }

        else {
            printf("\nDigite o peso do produto, em gramas: ");
            scanf("%f", &peso);

            total = (peso / 1000) * produto[j].valor;
            printf("O valor de %.2f gramas de %s é: %.2f\n", peso, produto[j].nome, total);

            printf("\nDeseja adicionar outro produto? Digite 1: ");
            compra += total;
        }

        scanf("%i", &continuar);

        if (continuar != 1) {
            printf("\nO total da sua compra é: R$%.2f\n", compra);
            float pagamento, troco;
            printf("Digite o valor pago pelo cliente: R$");
            scanf("%f", &pagamento);

            while (pagamento < compra) {
                printf("\nO cliente não pagou o valor necessário. Insira outro valor: R$");
                scanf("%f", &pagamento);
            }

            troco = pagamento - compra;

            if (troco <= 0) {
                printf("Compra finalizada! Troco não é necessário");
            }

            else {
                printf("\nVocê deve R$%.2f de troco ao cliente", troco);
            }

            printf("\nDeseja iniciar uma nova compra? Digite 1: ");
            scanf("%i", &continuar);

            if (continuar != 1) {
                printf("\nSistema fechando...\n");
                return 0;
            }

            else {
                troco = 0;
                compra = 0;
            }
        }
    }

    return 0;
}

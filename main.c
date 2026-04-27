#include <stdbool.h>
#include <stdio.h>

void menu() {
    printf("==============================\n");
    printf("SISTEMA EQUIPE 1CCA\n");
    printf("==============================\n");
    printf("1 - Inserir notas\n");
    printf("2 - Calcular media\n");
    printf("3 - Verificar situacao\n");
    printf("4 - Exibir resultado\n");
    printf("5 - Sair\n");
    printf("Escolha uma opcao: ");
}

int main() {
    int opcao;
    float nota_1 = 0, nota_2 = 0, media = 0;

    while (true) {
        menu();
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Insira a primeira nota: ");
                scanf("%f", &nota_1);
                printf("Insira a segunda nota: ");
                scanf("%f", &nota_2);
                break;

            case 2:
                media = (nota_1 + nota_2) / 2;
                printf("Media calculada: %.2f\n", media);
                break;

            case 3:
                if (media >= 8)
                    printf("Situacao: Aprovado com excelencia\n");
                
                else if(media >= 6 && media < 8)
                    printf("Situacao: Aprovado");
                else
                    printf("Situacao: Reprovado\n");
                break;
        }
    }

    return 0;

}

        
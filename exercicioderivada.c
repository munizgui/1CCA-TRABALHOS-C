#include <stdio.h>


void derivada(float a, float b) {
    float resultado = 2 * a;
    printf("f'(x) = %.2fx + %.2f\n", resultado, b);
}


float media(float n1, float n2, float n3) {
    return (n1 + n2 + n3) / 3;
}


void classificacao(float m) {
    if (m >= 7) {
        printf("Aprovado\n");
    } else if (m >= 5) {
        printf("Recuperacao\n");
    } else {
        printf("Reprovado\n");
    }
}

int main() {
    int opcao;

    do {
        printf("\n=== MENU ===\n");
        printf("1 - Calcular derivada\n");
        printf("2 - Calcular media\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1: {
                float a, b, c;

                printf("Digite o valor de a: ");
                scanf("%f", &a);

                printf("Digite o valor de b: ");
                scanf("%f", &b);

                printf("Digite o valor de c: ");
                scanf("%f", &c);

                derivada(a, b);
                break;
            }
              case 2: {
                float n1, n2, n3, m;

                printf("Digite 3 notas: ");
                scanf("%f %f %f", &n1, &n2, &n3);

                m = media(n1, n2, n3);

                printf("Media = %.2f\n", m);
                classificacao(m);
                break;
            }
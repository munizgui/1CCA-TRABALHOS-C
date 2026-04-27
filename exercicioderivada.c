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
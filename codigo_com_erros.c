#include <stdio.h> //Adição da chaves e remoção das aspas

int main() {
    float nota1, nota2, media; // Adição do ponto e virgula

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2); //Adição do &

    media = nota1 + nota2 / 2;

    if (media = 6) {
        printf("Aluno aprovado\n");
    } else {
        printf("Aluno reprovado\n");
    }

    return 0;
}
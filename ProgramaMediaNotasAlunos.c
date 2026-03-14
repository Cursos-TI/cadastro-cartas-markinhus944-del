#include <stdio.h>
int main() {
    float nota1, nota2, nota3, media;
char nome[50];

    printf("Digite o nome do aluno:\n");
    fgets(nome, sizeof(nome), stdin);


    printf("Digite a primeira nota:\n");
    scanf("%f", &nota1);

    printf("Digite a segunda nota:\n");
    scanf("%f", &nota2);

    printf("Digite a terceira nota:\n");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;
    printf("\n--- Resultado ---\n");
    printf("\nNome do aluno: %s\n", nome);
    printf("Nota Matematica: %.2f\n", nota1);
    printf("Nota Geografia: %.2f\n", nota2);
    printf("Nota Ciencias: %.2f\n", nota3);
    printf("Media: %.2f\n", media);

    return 0;
}
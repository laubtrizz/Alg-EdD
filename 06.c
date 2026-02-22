#include <stdio.h>
#include <string.h>

typedef struct {
    int matricula;
    int disciplina;
    double media, n1, n2;
    char nome[50];
} Alunos;

int main() {
    Alunos dados[10];

    for (int i = 0; i < 10; i++) {
        printf("Informe o nome do aluno %d: ", i + 1);
        fgets(dados[i].nome, 50, stdin);
        getchar();

        printf("Informe a matricula: ");
        scanf(" %d", &dados[i].matricula);

        printf("Informe o codigo da disciplina: ");
        scanf(" %d", &dados[i].disciplina);

        printf("Informe as duas notas: ");
        scanf(" %lf %lf", &dados[i].n1, &dados[i].n2);

        while (getchar() != '\n');

        dados[i].media = (dados[i].n1 * 1 + dados[i].n2 * 2) / 3.0;

        printf("\n");
    }

    printf("===== Listagem final dos alunos =====\n");

    for (int i = 0; i < 10; i++) {
        printf("Aluno: %s", dados[i].nome);
        printf("Matricula: %d\n", dados[i].matricula);
        printf("Codigo da disciplina: %d\n", dados[i].disciplina);
        printf("Nota 1: %.2lf\n", dados[i].n1);
        printf("Nota 2: %.2lf\n", dados[i].n2);
        printf("Media: %.2lf\n", dados[i].media);
        printf("\n");
    }

    return 0;
}
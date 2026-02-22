/* Construa uma estrutura aluno com nome, numero de matrıcula e curso. Leia do usuario ´
a informaçao de 5 alunos, armazene em vetor dessa estrutura e imprima os dados na tela.*/
#include<stdio.h>
#include<string.h>

typedef struct {
char nome[50];
int matricula;
char curso[20];
}dados;

int main(){
dados alunos[5];
for(int i=0; i<5; i++){
    printf("Informe o seu nome: ");
        fgets(alunos[i].nome, 50, stdin);
    printf("Informe a matricula: ");
        scanf("%d", &alunos[i].matricula);
            getchar();
    printf("informe seu curso: ");
        fgets(alunos[i].curso, 20, stdin);
}
    for(int i=0; i<5; i++){
        printf("nome: %smatricula: %d\ncurso: %s", alunos[i].nome, alunos[i].matricula, alunos[i].curso);
    }

    return 0;
}
/*Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve
conter a matr´ıcula do aluno, nome, nota da primeira prova, nota da segunda prova e nota
da terceira prova.
(a) Permita ao usuario entrar com os dados de 5 alunos. ´
(b) Encontre o aluno com maior nota da primeira prova.
(c) Encontre o aluno com maior media geral. ´
(d) Encontre o aluno com menor media geral ´
(e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para
aprovação*/
#include<stdio.h>
#include<string.h>

typedef struct {
    int matricula;
    char nome[50];
    double media, n1, n2, n3;
} dados;

int main(){
dados alunos[5];
double maiorn=0, mg=0, mmg=1234567890;
for(int i=0; i<5; i++){
    printf("Informe o seu nome: ");
        fgets(alunos[i].nome, 50, stdin);
    printf("Informe sua matricula: ");
        scanf("%d", &alunos[i].matricula);
        getchar();
    printf("Informe as 3 notas: ");
    scanf("%lf%lf%lf",&alunos[i].n1, &alunos[i].n2, &alunos[i].n3);
    getchar();
    alunos[i].media =(alunos[i].n1 + alunos[i].n2 + alunos[i].n3)/3;
    if(alunos[i].n1 > maiorn ){
        maiorn=alunos[i].n1;
    }
    if(alunos[i].media > mg ){
        mg=alunos[i].media;
    }
    if(alunos[i].media < mmg ){
        mmg=alunos[i].media;
    }
    if(alunos[i].media >=6){
        printf("Aprovado\n");
    }
    else{
        printf("Reprovado\n");
    }

}


    return 0;
}
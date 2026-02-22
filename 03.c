/*Implemente um programa que leia o nome, a idade e o endereço de 3 pessoas e
armazene os dados em uma estrutura, e ao final exiba.*/
#include<stdio.h>
#include<string.h>

struct dados{
char nome[50];
int idade;
char endereco[70];
};


int main(){

    struct dados pessoas[3];
    for(int i=0; i<3; i++){
        printf("Informe o seu nome: ");
            fgets(pessoas[i].nome, 50, stdin);
        printf("Informe sua idade: ");
            scanf("%d", &pessoas[i].idade);
            getchar();
        printf("Informe o seu endereco: ");
            fgets(pessoas[i].endereco, 70, stdin);
    }
    for(int i=0; i<3; i++){
        printf("nome: %sidade: %d\nendereco: %s\n", pessoas[i].nome, pessoas[i].idade, pessoas[i].endereco);
    }
    
    return 0;
}
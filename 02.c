/*Crie uma função, sem retorno, que recebe um valor inteiro por parâmetro e informa
se ele é positivo, negativo ou neutro.*/

#include<stdio.h>

void valor( int v){
    if(v < 0){
        printf("%d e negativo", v);
    }
    else if(v > 0){
        printf("%d e positivo", v);
    }
    else{
        printf("%d e neutro", v);
    }
}

int main(){
    int v;
    printf("Informe um valor inteiro: ");
    scanf("%d", &v);
    valor(v);

    return 0;
}
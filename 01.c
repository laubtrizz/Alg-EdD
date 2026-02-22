/*Implemente um algoritmo que cria um array (qualquer tipo) de tamanho 10 e inicialize apenas
os 4 primeiros elementos*/
#include<stdio.h>
int main(){
int v[10];
for(int i=0; i<4; i++){
    printf("Informe os 4 primeiros valores: ");
    scanf("%d", &v[i]);
}
for(int i=0; i<10; i++){
    printf("%d ", v[i]);
}

    return (0);
}
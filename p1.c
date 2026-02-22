/*Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char. 
Associe as variaveis aos ponteiros (use &). Modifique os valores de cada variavel usando os ponteiros.
Imprima os valores das variaveis antes e apos a modificação. */
#include<stdio.h>

int main(){
int a= 10;
float b= 5.4;
char c= 'C';

int *pa=0;
float *pb=0;
char *pc;

pa= &a;
pb= &b;
pc= &c;

printf("===Antes da modificacao===\n");
printf("%d\n", *pa);
printf("%.2f\n", *pb);
printf("%c\n", *pc);

*pa= 20;
*pb= 9.8;
*pc='L';

printf("\n===Depois da modificacao===\n");
printf("%d\n", *pa);
printf("%.2f\n", *pb);
printf("%c\n", *pc);

    return 0;
}
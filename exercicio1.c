/*
[x]Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char.
[x]Associe as variaveis aos ponteiros (use &).
[x]Modifique os valores de cada variavel usando os ponteiros.
[x]Imprima os valores das variáveis antes e após a modificacao. */

#include <stdlib.h>
#include <stdio.h>

int main(){
    int inteiro;
    double real;
    char caracter;

    inteiro = 5;
    real = 8.1;
    caracter = 'y';
    printf("------------------------------------------------\n");
    printf("Variaveis antes da alteracao pelo ponteiro: \n");
    printf("inteiro: %d \n", inteiro);
    printf("real: %.2f \n", real);
    printf("caracter: %c \n", caracter);

    int *pInteiro;
    double *pReal;
    char *pCaracter;

    pInteiro = &inteiro;
    pReal = &real;
    pCaracter = &caracter;

    *pInteiro = 10;
    *pReal = 6.2;
    *pCaracter = 'd';

    printf("------------------------------------------------\n");
    printf("Variaveis apos da alteracao pelo ponteiro: \n");
    printf("inteiro: %d \n", inteiro);
    printf("real: %.2f \n", real);
    printf("caracter: %c \n", caracter);



    return 0;
}

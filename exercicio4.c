/*Fa�a um programa que leia 2 valores inteiros e chame uma fun��o que receba estas 2 variaveis e troque o seu conte�do,
ou seja, esta fun��o � chamada passando duas vari�veis A e B por exemplo e, ap�s  a execu��o da fun��o,
A conter� o valor de B e B ter� o valor de A. */

#include <stdlib.h>
#include <stdio.h>

void inverterVariaveis(int *pA, int *pB){
    int temp;

    temp = *pA;
    *pA = *pB;
    *pB = temp;
}

int main(){
    int numero1, numero2;

    printf("Digite um valor para o primeiro numero inteiro: \n");
    scanf("%d", &numero1);
    printf("Digite um valor para o segundo numero inteiro: \n");
    scanf("%d", &numero2);

    printf("--------------------------------------------------\n");
    printf("Valores antes da inversao: \n");
    printf("Numero 1: %d \n", numero1);
    printf("Numero 2: %d \n", numero2);

    inverterVariaveis(&numero1, &numero2);

    printf("--------------------------------------------------\n");
    printf("Valores apos a inversao: \n");
    printf("Numero 1: %d \n", numero1);
    printf("Numero 2: %d \n", numero2);


    return 0;
}

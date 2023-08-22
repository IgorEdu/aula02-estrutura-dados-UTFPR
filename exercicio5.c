/*Faça um programa que leia dois valores inteiros
e chame uma função que receba estes 2 valores de entrada
e retorne o maior valor na primeira variavel e o menor valor na segunda variavel.
Escreva o conteúdo das 2 variáveis na tela.*/

#include <stdio.h>
#include <stdlib.h>

void classificarNumeros(int *pA, int *pB){
    int temp;
    temp = *pA;

    if(*pA < *pB){
        *pA = *pB;
        *pB = temp;
    }
}

int main(){
    int numero1, numero2;

    printf("Digite um valor para o primeiro numero inteiro: \n");
    scanf("%d", &numero1);
    printf("Digite um valor para o segundo numero inteiro: \n");
    scanf("%d", &numero2);

    printf("--------------------------------------------------\n");
    printf("Valores antes da classificacao: \n");
    printf("Numero 1: %d \n", numero1);
    printf("Numero 2: %d \n", numero2);

    classificarNumeros(&numero1, &numero2);

    printf("--------------------------------------------------\n");
    printf("Valores apos a classificacao: \n");
    printf("Maior numero (usando a variavel 1) : %d \n", numero1);
    printf("Menor numero (usando a variavel 2): %d \n", numero2);


    return 0;
}

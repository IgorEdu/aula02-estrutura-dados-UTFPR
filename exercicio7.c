/*Crie um programa que contenha uma func�ao que permita passar por par�metro dois numeros inteiros A e B.
A fun�o dever� calcular a soma entre estes dois n�meros e armazenar o resultado na variavel A.
Esta fun��o n�o dever� possuir retorno, mas dever� modificar o valor do primeiro par�metro.
Imprima os valores de A e B na fun��o principal.*/

#include <stdio.h>
#include <stdlib.h>

void calcularSoma(int *pA, int *pB){
    *pA = (*pA + *pB);
}

int main(){
    int numero1, numero2, soma;

    printf("Digite um valor para o primeiro numero inteiro: \n");
    scanf("%d", &numero1);
    printf("Digite um valor para o segundo numero inteiro: \n");
    scanf("%d", &numero2);

    printf("--------------------------------------------------\n");
    printf("Valores antes da soma: \n");
    printf("Numero 1: %d \n", numero1);
    printf("Numero 2: %d \n", numero2);

    calcularSoma(&numero1, &numero2);

    printf("--------------------------------------------------\n");
    printf("Valores depois da soma: \n");
    printf("Numero 1: %d \n", numero1);
    printf("Numero 2: %d \n", numero2);


    return 0;
}

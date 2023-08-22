/* Elaborar um programa que leia dois valores inteiros (A e B).
Em seguida faça uma função que retorne a soma do dobro dos dois numeros lidos.
A função deverá armazenar o dobro de A na propria variável A e o dobro de B na própria variável B.*/

#include <stdio.h>
#include <stdlib.h>

int somarValoresDobrados(int *pA, int *pB){
    int soma;

    *pA *= 2;
    *pB *= 2;
    soma = (*pA + *pB);

    return soma;
}

int main(){
    int numero1, numero2, soma;

    printf("Digite um valor para o primeiro numero inteiro: \n");
    scanf("%d", &numero1);
    printf("Digite um valor para o segundo numero inteiro: \n");
    scanf("%d", &numero2);
 /*
    printf("--------------------------------------------------\n");
    printf("Valores antes da classificacao: \n");
    printf("Numero 1: %d \n", numero1);
    printf("Numero 2: %d \n", numero2);
*/
    soma = somarValoresDobrados(&numero1, &numero2);

    printf("--------------------------------------------------\n");
    printf("Soma dos valores dobrados: %d \n", soma);
    printf("Primeiro numero dobrado (usando a mesma variavel) : %d \n", numero1);
    printf("Segundo numero dobrado (usando a mesma variavel): %d \n", numero2);


    return 0;
}

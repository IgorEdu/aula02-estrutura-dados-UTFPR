/*Escreva um programa que contenha duas variaveis inteiras.
Leia essas variáveis do teclado.
Em seguida, compare seus enderec¸os e exiba o conteudo do maior endereço*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero1, numero2;

    printf("Digite um valor para o primeiro numero inteiro: \n");
    scanf("%d", &numero1);
    printf("Digite um valor para o segundo numero inteiro: \n");
    scanf("%d", &numero2);

    printf("Endereco do numero1: %x \n", &numero1);
    printf("Endereco do numero2: %x \n", &numero2);

    if(&numero1 > &numero2){
        printf("O endereco do numero 1 e o maior.\n");
        printf("O valor do numero 1 e: %d", numero1);
    } else{
        printf("O endereco do numero 2 e o maior.\n");
        printf("O valor do numero 2 e: %d", numero2);
    }
    return 0;
}

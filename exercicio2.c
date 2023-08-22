/*2. Escreva um programa que contenha duas variaveis inteiras.
Compare seus enderecos e exiba o maior enderec¸o*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero1, numero2;

    numero1 = 10;
    numero2 = 4;

    printf("Endereco do numero1: %x \n", &numero1);
    printf("Endereco do numero2: %x \n", &numero2);

    if(&numero1 > &numero2){
        printf("O endereco do numero 1 e o maior.\n");
    } else{
        printf("O endereco do numero 2 e o maior.\n");
    }

    return 0;
}

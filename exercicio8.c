/*Crie um programa que contenha um array de float contendo 10 elementos. Imprima o endereço de cada posição desse array*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float array[10];
    int i;

    for(i = 0; i < (sizeof(array) / sizeof(array[0])); i++){
        printf("Endereco da posicao %d: %x\n", i, &array[i]);
    }

    return 0;
}

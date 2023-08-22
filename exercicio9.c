/*Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas.
 Imprima o endereço de cada posição dessa matriz.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float matriz[3][3];
    int i, j;

    for(i = 0; i < (sizeof(matriz) / sizeof(matriz[0])); i++){
        for(j = 0; j < (sizeof(matriz[0]) / sizeof(matriz[0][0])); j++){
         printf("Endereco da posicao [%d][%d]: %x\n", i, j, &matriz[i][j]);
        }
    }

    return 0;
}

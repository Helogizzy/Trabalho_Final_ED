#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "module.h"

/*"HeapSort" ou "Ordenação usando Heap"
  - Heap é um vetor que simula uma árvore binária completa com exceção
    do ultimo nível, todos os elementos 'pai' do vetor, possuem dois elementos
    como 'filhos'*/

int main(int argc, char *argv[]){

    /*Pegamos o valor do tamanho do vetor por argumentação, que é passada
      dentro do makefile do programa*/
    int TAM = strtol(argv[1], NULL, 10);
    int vet[TAM];

    //Randomiza o vetor com números aleatorios
    randomize_vet(vet, TAM);

    //Printa o vetor sem a ordenação do HeapSort
    printf("\nSem ordenação:\n");
    printf_vet(vet, TAM);

    /*Chama a função para ordenação do vetor, dentro dessa função existe
      a função da criação da Heap*/
    heap_Sort(vet, TAM);

    //Printa o vetor já ordenado para a comparação feita acima
    printf("\nCom ordenação:\n");
    printf_vet(vet, TAM);

    return EXIT_SUCCESS;
}
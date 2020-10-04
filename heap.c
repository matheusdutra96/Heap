#include <stdio.h>
#include <stdlib.h>
#include "heap.h"

void criaHeap(Heap *h){
    h->qnt=0;
}

void insereValor(Heap *h,int n){
    h->vetor[h->qnt] = n;
    int filho = h->qnt;
    int pai = (filho-1)/2;
    while(pai>=0)
    {
        if(h->vetor[pai] > h->vetor[filho])
        {
            int aux = h->vetor[pai];
            h->vetor[pai] = h->vetor[filho];
            h->vetor[filho] = aux;
            filho = pai;
            pai = (filho-1)/2;
        }
        else
            pai=-1;
    }
    h->qnt++;

}
int minValor(Heap h){
    return h.vetor[0];
}

void imprimeHeap(Heap h){

    int i;
    for(i=0;i<h.qnt;i++)
    {
        printf("%d ",h.vetor[i]);
    }
    printf("\n");
}


#ifndef HEAP_H_INCLUDED
#define HEAP_H_INCLUDED
#define MAX 100

typedef struct heap{
    int vetor[MAX];
    int qnt;
}Heap;

int minValor(Heap h);
void insereValor(Heap *h,int n);
void criaHeap(Heap *h);
void imprimeHeap(Heap h);

#endif // HEAP_H_INCLUDED

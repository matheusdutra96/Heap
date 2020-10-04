#include <stdio.h>
#include <stdlib.h>
#include "heap.h"

int main()
{
    Heap h;
    criaHeap(&h);
    char opcao;
    int num;

    do{
        scanf("%c",&opcao);
        switch(opcao){

            case 'I':
                scanf("%d\n",&num);
                insereValor(&h,num);
                break;
            case 'M':
                printf("%d\n",minValor(h));
                break;
            case 'P':
                imprimeHeap(h);
                break;
            case 'S':
                break;
        }

    }while(opcao!='S');
    return 0;
}

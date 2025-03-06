#ifndef PILHA_H
#define PILHA_H

#include <stdbool.h>

typedef struct 
{
    int tamanho;
    int topo;
    int *pilha;
} Pilha;

Pilha* criar_pilha(int tamanho);
bool is_empty(Pilha *p);
bool is_full(Pilha *p);
void push(int e, Pilha *p);
void pop(Pilha *p);
void topo(Pilha *p);
void liberar_pilha(Pilha *p);

#endif

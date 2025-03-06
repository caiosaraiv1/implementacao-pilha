#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main()
{
    Pilha *minha_pilha = criar_pilha(5);
    if (minha_pilha == NULL)
    {
        return -1;
    }

    bool esta_vazio = is_empty(minha_pilha);
    printf("A pilha esta vazia? %s\n", esta_vazio ? "true" : "false");

    printf("Empilhando elementos...\n");
    push(10, minha_pilha);  // Empilha o número 10
    push(20, minha_pilha);  // Empilha o número 20
    push(30, minha_pilha);  // Empilha o número 30
    push(40, minha_pilha);  // Empilha o número 40
    push(50, minha_pilha);  // Empilha o número 50
    push(60, minha_pilha);  // Tenta empilhar mais um, pilha cheia

    printf("\nTopo da pilha: ");
    topo(minha_pilha);

    printf("\nDesempilhando elementos...\n");
    pop(minha_pilha);  // Desempilha o topo
    pop(minha_pilha);  // Desempilha o topo

    printf("\nTopo da pilha: ");
    topo(minha_pilha); // Verifica o topo após desempilhar dois elementos

    printf("\nDesempilhando ate a pilha ficar vazia...\n");
    pop(minha_pilha);  // Desempilha o topo
    pop(minha_pilha);  // Desempilha o topo
    pop(minha_pilha);  // Desempilha o topo
    pop(minha_pilha);  // Desempilha o topo

    printf("\nTopo da pilha: ");
    topo(minha_pilha);
    esta_vazio = is_empty(minha_pilha);
    printf("A pilha esta vazia? %s\n", esta_vazio ? "true" : "false");

    // Liberando a memória
    liberar_pilha(minha_pilha);

    return 0;
}

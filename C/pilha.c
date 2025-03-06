#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "pilha.h"

Pilha* criar_pilha(int tamanho)
{
      Pilha *p = (Pilha *)malloc(sizeof(Pilha));
      if (p == NULL)
      {
            printf("Erro ao alocar memória para a pilha.\n");
            return NULL;
        }

      (*p).tamanho = tamanho;
      (*p).topo = -1;
      (*p).pilha = (int *)malloc(tamanho * sizeof(int));
      if (p->pilha == NULL)
      {
            printf("Erro ao alocar memória para os elementos da pilha.\n");
            free(p);
            return NULL;
        }

      return p;
}

bool is_empty(Pilha *p)
{
      return (*p).topo == -1;
}

bool is_full(Pilha *p)
{
      return (*p).topo == (*p).tamanho - 1;
}

void push(int e, Pilha *p)
{
      if(!is_full(p))
      {
            (*p).topo++;
            (*p).pilha[(*p).topo] = e;
      }
      else
      {
            printf("Erro: Pilha cheia!\n");
      }
}

void pop(Pilha *p)
{
      if(!is_empty(p))
      {
            printf("%i\n", (*p).pilha[(*p).topo]);
            (*p).pilha[(*p).topo] = 0;
            (*p).topo--;
      }
      else
      {
            printf("Erro: Pilha vazia!\n");
      }
}

void topo(Pilha *p)
{
      if(!is_empty(p))
      {
            printf("%i\n", (*p).pilha[(*p).topo]);
      }
      else
      {
            printf("Erro: Pilha vazia!\n");
      }
}

void liberar_pilha(Pilha *p)
{
      if(p != NULL)
      {
            free((*p).pilha);
            free(p);
      }
}

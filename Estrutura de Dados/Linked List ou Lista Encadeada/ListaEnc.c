#include <stdio.h>
#include <stdlib.h>

typedef struct listaEncad
{

    int val;
    struct ListaEncad* prox;

} ListaEncad;

void criarElemLista(ListaEncad *novo, int valor);
void printarLista(ListaEncad *lista);

ListaEncad *lista = NULL;

int main()
{
	ListaEncad *A = (ListaEncad *) malloc(sizeof(ListaEncad *));
	ListaEncad *B = (ListaEncad *) malloc(sizeof(ListaEncad *));
	ListaEncad *C = (ListaEncad *) malloc(sizeof(ListaEncad *));
	A->val = 3;
	
	printf("%i\n", A->val);
	printf("%p\n", A->prox);
	
	insere(4,A);
	
	printf("%i\n", A->val);
	printf("%p\n", A->prox);
	
}

void insere (int x, ListaEncad *p)
{
   if(lista = NULL)
   {
   		printf("Nao tem comeco\n");
   }
   else
   {
   		printf("Tem comeco\n");
   }
}

void printarLista(ListaEncad *no)
{
    while(lista->prox != NULL)
    {
        printf("%i", lista->val);
        lista = lista->prox;
    }
}


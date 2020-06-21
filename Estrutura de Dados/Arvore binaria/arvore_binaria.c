#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
     int valor;
     struct node* esquerda;
     struct node* direita;
     
} Node;

void inserirDado(Node** no, int numero);
void preOrdem(Node* no);
void emOrdem(Node* no);
void posOrdem(Node* no);

int main(void) { //Funcionando..

	Node* arvore1 = NULL;
	inserirDado(&arvore1, 4);
    inserirDado(&arvore1, 2);
    inserirDado(&arvore1, 3);
    inserirDado(&arvore1, 10);
    inserirDado(&arvore1, 1);
    inserirDado(&arvore1, 8);
    inserirDado(&arvore1, 19);
    inserirDado(&arvore1, 81);
    
    preOrdem(arvore1);
    printf("\n");
    emOrdem(arvore1);
    printf("\n");
    posOrdem(arvore1);

}

//Funcao de colocar um numero aleatoria dentro de um Node.
//Ao fazer isso com varios numeros, serao criados nodos com descendentes.

void inserirDado(Node** no, int numero)
{
     if(*no == NULL) { //Se nao houver um nodo anterior, o primeiro numero se torna RAIZ.

          * no = (Node*) malloc(sizeof(Node));
          (*no)->direita = NULL;
          (*no)->esquerda = NULL;
          (*no)->valor = numero;

     }else{ //Caso contrario, a definicao do numero, se entrara no nodo esquerdo ou direito.
          if (numero < (*no)->valor) {
               inserirDado(&(*no)->esquerda, numero);
          }
          else
          {
               inserirDado(&(*no)->direita, numero); // (& = endereco)
          }
          
     }
}

void emOrdem(Node* no) //significa que os valores acessados serao do menor para o maior..
{
     if(no != NULL)
     {
          emOrdem(no->esquerda);
          printf("%d,", no->valor);
          emOrdem(no->direita);

     }
}

void preOrdem(Node* no) //Primeiro a raiz, depois todos os valores da esquerda (de cima pra baixo), depois todos os valores da direita(baixo pra cima).
{
	if(no != NULL)
	{
		printf("%d,", no->valor);
		preOrdem(no->esquerda);
		preOrdem(no->direita);
	}
}

void posOrdem(Node* no) 
{
	if(no != NULL) //Valores a partir das folhas, e vai subindo..
	{
		posOrdem(no->esquerda);
		posOrdem(no->direita);
		printf("%d,", no->valor);
	}
}

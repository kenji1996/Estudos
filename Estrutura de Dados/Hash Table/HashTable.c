#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int tamanhoTabela = 10;

int gerarHash(int valor);

int stringForInt(char* string);

int main()
{
	
	char dado[50];
	printf("Defina o tamanho da tabela: ");
	scanf("%i", &tamanhoTabela);
	printf("\nEscreva uma palavra :");
	gets(dado);
	printf("\nA Hash gerada sera %i", gerarHash(stringForInt(dado)));
	
	//for(int i=0 ; i<tamanhoTabela ; i++)
	//{
		//printf("Escreva uma palavra: ");
		//gets(dado);
		//printf("A Hash gerada sera %i\n", gerarHash(stringForInt(dado)));
	//}
	
	
	
}

int gerarHash(int valor)
{
	return valor % tamanhoTabela;
}

int stringForInt (char* string)
{
	
	int tamanho, primeira, segunda,resultado;
	tamanho = strlen(string);
	primeira = string[0];
	segunda = string[1];
	resultado = (primeira * tamanho) + segunda;
	return resultado;
	
}
 

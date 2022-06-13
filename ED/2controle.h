#ifndef _2controle_
#define _2controle_

#include <stdio.h>
#include <conio.h>

typedef struct Produto{
	int codProduto;
	char nomeProduto[20];
	float valorProduto, qtdeProduto;
}TProduto;

typedef struct ListaCarrinho{
	TProduto dadosProduto[10];
	int tamanhoCarrinho;
}LCarrinho;

void inicializarTamCarrinho (LCarrinho *p);
void inserirProduto (LCarrinho *p);
int validarProduto (LCarrinho *p, int codProduto);
void exclusaoProduto (LCarrinho *p);
void apresentarCarrinho (LCarrinho *p);


#endif

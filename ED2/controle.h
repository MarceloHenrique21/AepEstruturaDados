#ifndef _controle_
#define _controle_

#include <stdio.h>
#include <conio.h>

typedef struct Produto{
	int codProduto;
	char nomeProduto[20];
	float valorProduto;
	int qtdeProduto;
	int totalQtd;
	int totalVlr;
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


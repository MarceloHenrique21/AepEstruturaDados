#include "2controle.h"

void inserirProduto(LCarrinho *p){
	
	if (p->tamanhoCarrinho < 10)
	{
		printf("\n Codigo do Produto: ");
		scanf("%d", &p->dadosProduto[p->tamanhoCarrinho].codProduto);
		
		printf("\n Nome do Produto: ");
		fflush(stdin);
		gets(p->dadosProduto[p->tamanhoCarrinho].nomeProduto);
		
		printf("\n Valor do Produto: ");
		scanf("%f", &p->dadosProduto[p->tamanhoCarrinho].valorProduto);
		
		printf("\n Quantidade desejada: ");
		scanf("%d", &p->dadosProduto[p->tamanhoCarrinho].qtdeProduto);
		
		p->tamanhoCarrinho++;
	}
	else
	{
		printf("\n Lista cheia!");
	}	
}

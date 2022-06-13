#include "controle.h"

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
		
		//printf("\n Quantidade desejada: ");							informar qtd
		//scanf("%d", &p->dadosProduto[p->tamanhoCarrinho].qtdeProduto);
		
		p->tamanhoCarrinho++;

		p->dadosProduto[p->tamanhoCarrinho].totalQtd++;
		
		//p->dadosProduto[p->tamanhoCarrinho].totalQtd =
		//p->dadosProduto[p->tamanhoCarrinho].totalQtd + 1;

		/* calcular com a qtd informada
		p->dadosProduto[p->tamanhoCarrinho].totalQtd =0;
		p->dadosProduto[p->tamanhoCarrinho].totalQtd +=
		p->dadosProduto[p->tamanhoCarrinho].totalQtd + 
		p->dadosProduto[p->tamanhoCarrinho].qtdeProduto;
		*/
		
		p->dadosProduto[p->tamanhoCarrinho].totalVlr =
		p->dadosProduto[p->tamanhoCarrinho].totalVlr + 
		p->dadosProduto[p->tamanhoCarrinho].valorProduto;		
		
	}
	else
	{
		printf("\n Lista cheia!");
	}	
}

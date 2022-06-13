#include "2controle.h"

void apresentarCarrinho (LCarrinho *p){
	
	if(p->tamanhoCarrinho > 0){
		int i;
					 
		printf("\n\n ========= CARRINHO ========= ");

		for(i = 0; i < p->tamanhoCarrinho; i++){
			printf("\n Codigo do Produto: %d", p->dadosProduto[i].codProduto);
			printf("\n Nome do Produto: %s", p->dadosProduto[i].nomeProduto);
			printf("\n Valor do Produto: %.2f", p->dadosProduto[i].valorProduto);
			printf("\n Quantidade desejada: %d", p->dadosProduto[i].qtdeProduto);
			printf("\n ============================");	
		}			
	}
	else
	{
		printf("\n Lista vazia!");
	}
	
}

#include "controle.h"

void calcular(LCarrinho *p){
	
	for(int i = 0; i < p->tamanhoCarrinho; i++){
		
		p->dadosProduto[p->tamanhoCarrinho].totalQtd =0;
		p->dadosProduto[p->tamanhoCarrinho].totalQtd +=
		p->dadosProduto[p->tamanhoCarrinho].totalQtd + 
		p->dadosProduto[p->tamanhoCarrinho].qtdeProduto;
		
		p->dadosProduto[p->tamanhoCarrinho].totalVlr =0;
		p->dadosProduto[p->tamanhoCarrinho].totalVlr +=
		p->dadosProduto[p->tamanhoCarrinho].totalVlr + 
		p->dadosProduto[p->tamanhoCarrinho].valorProduto;
		
	}
}


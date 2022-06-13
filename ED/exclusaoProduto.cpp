#include "controle.h"

void exclusaoProduto(LCarrinho *p){
	
	int codConsulta;
	
	printf("\n Informe codigo do produto para exclusao no carrinho: ");
	scanf("%d", &codConsulta);
	
	int i = validarProduto(p, codConsulta);
	
	if (i != -1)
	{
		int x;
		for (x = i; x < p->tamanhoCarrinho-1; x++)
		{
			p->dadosProduto[x] = p->dadosProduto[x+1];
		}
		p->tamanhoCarrinho--;
		
		printf("\n Exclusão feita com Sucesso!");
	}
	else
	{
		printf("\n Nao encontrado o produto da pesquisa!");
	}
}



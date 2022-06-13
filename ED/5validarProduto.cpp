#include "2controle.h"

int validarProduto(LCarrinho *p, int codProduto)
{
	int i;
	
	for (i = 0; i < p->tamanhoCarrinho; i++)
	{
		if (p->dadosProduto[i].codProduto == codProduto)
		{
			return i;
		}
	}
	return -1;
}


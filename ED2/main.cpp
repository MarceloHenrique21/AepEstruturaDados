#include "controle.h"

#include <stdio.h>
#include <conio.h>

int main(){

	char nomeCliente;
	int cpfCliente;

	printf("\n ----------------------------------");
	printf("\n Insira seu Nome: ");
	scanf("%d", &nomeCliente);
	
	printf("\n Insira o seu CPF: ");
	fflush(stdin);
	scanf("%d", &cpfCliente);
	
	int esc; //variavel de escolha do menu
	
	LCarrinho C;  //variavel para a lista do carrinho
	
	inicializarTamCarrinho (&C);
	
	do{
		printf("\n\n ------------MENU------------");
		printf("\n 1 - Inserir o produto no carrinho");
		printf("\n 2 - Excluir algum produto do carrinho");
		printf("\n 3 - Carrinho");
		printf("\n 0 - Sair do menu");
		printf("\n ----------------------------");
		printf("\n Escolha uma opcao: ");
		scanf("%d", &esc);
		printf(" ---------------------------- \n");
		switch(esc){
			case 1: inserirProduto(&C);	break;
			case 2: exclusaoProduto(&C);	break;
			case 3: apresentarCarrinho(&C); break;
		}		
	}
		while(esc !=0);
		
}


/*Bibliotecas*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/*Variaveis*/
char op;

/*Corpo do programa*/
int main ()
{
	/*constroi o menu*/
	printf("\t=====================\t\n");
	printf("\t         MENU        \t\n");
	printf("\t=====================\t\n");
	printf("\t      1. Pedido      \t\n");
	printf("\t      2. Pague       \t\n");
	printf("\t      3. Leve        \t\n");
	printf("\t      S. SAIR        \t\n");
	printf("\t=====================\t\n");
	printf("\n\tSua escolha:  ");
	fflush (stdin);
	
	//captura a opção escolhida
	// getche = pega o caracter mas nao apresenta na tela, pega uma tecla só
	//getch = pega o caracter exibe na tela mas nao salva
	op=getche();
	
	//chama o respectivo programa-filho
	if (op == '1')
		system("pedido")
	printf ("\n\nVOLTANDO AO MASTER");
	getch();
	
	return 0;	
}

/*Bibliotecas*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

/*Variaveis*/
char op;

/*Corpo do programa*/
int main ()
{
	setlocale(LC_ALL,"Portuguese");
	inicio:
		
	
	system ("color 07"); // cor de fundo preta e texto branco
	system ("cls");
	
	/*constroi o menu*/
	printf("=====================\n");
	printf("         MENU        \n");
	printf("=====================\n");
	printf("      1. Pedido      \n");
	printf("      2. Pague       \n");
	printf("      3. Leve        \n");
	printf("      S. SAIR        \n");
	printf("=====================\n");
	printf("\nSua escolha:  ");
	fflush (stdin);
	
	//captura a opção escolhida
	// getche = pega o caracter mas nao apresenta na tela, pega uma tecla só
	//getch = pega o caracter exibe na tela mas nao salva
	op=getche();
	
	//chama o respectivo programa-filho
	if (op == '1'){
		system("pedido");
		
	}
	else
	if (op == '2'){
		system("pague");
				   
	}
	else		
	if (op == '3'){
		system("leve");
				   
	}
	else		
	if (op == 'S '){
		exit(0);
	}
	else{
		printf("\nOpção Inválida\n\a\a\a");
		system ("pause");
		
	}
	/*system ("color 07"); // cor de fundo preta e texto branco
		
	system ("cls");
	printf ("master");
	getch();*/
	
	system ("cls");
	goto inicio;
	
	return 0;	
}

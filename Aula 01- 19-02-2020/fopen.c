/*Bibliotecas stdio encontra-se a fopen*/
#include <stdio.h>
/*Vari�veis de mem�ria*/
/*natureza de arq*/
/*FILE = nome do arq,tamanho,hora,dia...*/
/* o "*" � o ponteiro,ou seja, o endere�o de mem�ria*/
FILE * arq;

/*Corpo do Programa*/
	int main (){
		/*abre um arquivo (est� dentro de uma biblioteca)*/
		/*Primeira info = Nome do arquivo*/
		/*Segunda info = Modo do arquivo*/
		/*Modo r = ler, consultar o arquivo - Modo a = add dados novos, se o arquivo n�o existe ele cria um do zero "alguem me da uma folha*/
		/*Modo w = criar o arquivo do zero e escrever nele*/
		/*fopen (manipula��o de arquivos) � uma fun��o que vai tentar - devolve retorno para uma vari�vel(arq) que eu tenho que criar*/
		/*= recebe*/
		/*arquivo recebe o fopen*/
		/*NULL == endere�o todo zerado,ou seja,ele n�o existe FERROU!!!*/
		/*se existir ir� devolver em formato hexa*/
		 arq = fopen ("TIKET.TXT","a");
		 /*fprintf == display no arquivo e n�o na tela*/
		 /*tenho que mostrar qual arquivo que vou escrever essa frase*/
		 fprintf(arq,"=============================");
		 fprintf(arq,"DRIVE TRUE DO MICKEY & DONALD");
		 fprintf(arq,"=============================");
		 /*digo qual arquivo que vou querewr fechar*/
		 fclose(arq);
	}
 


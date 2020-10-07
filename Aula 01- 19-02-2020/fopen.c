/*Bibliotecas stdio encontra-se a fopen*/
#include <stdio.h>
/*Variáveis de memória*/
/*natureza de arq*/
/*FILE = nome do arq,tamanho,hora,dia...*/
/* o "*" é o ponteiro,ou seja, o endereço de memória*/
FILE * arq;

/*Corpo do Programa*/
	int main (){
		/*abre um arquivo (está dentro de uma biblioteca)*/
		/*Primeira info = Nome do arquivo*/
		/*Segunda info = Modo do arquivo*/
		/*Modo r = ler, consultar o arquivo - Modo a = add dados novos, se o arquivo não existe ele cria um do zero "alguem me da uma folha*/
		/*Modo w = criar o arquivo do zero e escrever nele*/
		/*fopen (manipulação de arquivos) é uma função que vai tentar - devolve retorno para uma variável(arq) que eu tenho que criar*/
		/*= recebe*/
		/*arquivo recebe o fopen*/
		/*NULL == endereço todo zerado,ou seja,ele não existe FERROU!!!*/
		/*se existir irá devolver em formato hexa*/
		 arq = fopen ("TIKET.TXT","a");
		 /*fprintf == display no arquivo e não na tela*/
		 /*tenho que mostrar qual arquivo que vou escrever essa frase*/
		 fprintf(arq,"=============================");
		 fprintf(arq,"DRIVE TRUE DO MICKEY & DONALD");
		 fprintf(arq,"=============================");
		 /*digo qual arquivo que vou querewr fechar*/
		 fclose(arq);
	}
 


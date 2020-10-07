/*Bibliotecas*/
#include <stdio.h>
#include <locale.h>

/*Variáveis de Memória [variáveis globais]*/
char tecla,tecla2;
int qtd;
float resultado;
FILE * arq; /*arq é a variável relacionada ao arquivo*/
/*Corpo do Programa*/
/* return 0 == devolve algo*/
/*void == quando a função não tem nada para declarar*/
int main (){
	
	setlocale(LC_ALL,"Portuguese");
	printf ("\nTemos batata-frita. Você quer? Digite S para sim. \n");
	scanf ("%c",&tecla);
	/*Testa o que a pessoa digitou: se 's' ou qualquer tecla*/
	if (tecla =='s')
	{
		printf("\nCada porção custa R$5,00\n");
		printf ("\nGostaria de quantas porções?\n");
		scanf ("%i",&qtd);
		resultado = qtd * 5;
		printf ("\nTotal a pagar:R$%.2f",resultado);
		

		printf ("\nGostaria da sua via? Digite S para sim.\n");
		scanf ("%c",&tecla2);
		
		if ( tecla2 == 's'){
			/*criar o arquivo do programa*/
			arq = fopen ("ticket0.txt","w");
			/*gravar o total do ticket*/
			fprintf(arq,"\nTotal a pagar:R$%.2f",resultado);
			/*fechar o arquivo*/
			fclose(arq);
			/*mostra na tel o conteúdo do arquivo ticket.txt*/
			system ("type ticket0.txt");
		} else {
			printf("\nObrigada por escolher nosso serviço. \nVolte Sempre!");
		}
		
    } else {
		printf ("Volte Sempre!");
	}
	
	return 0;
}

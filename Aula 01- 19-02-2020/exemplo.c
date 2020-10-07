/* Bibliotecas */
#include <stdio.h>
#include <ctype.h>
#include <locale.h>
/* Variáveis de memória (globais) */
float     n1, n2, t, resp;
/* CORPO DO PROGRAMA */
int main 	()
{    
	  setlocale(LC_ALL,"Portuguese");
      printf ("\n Digite a nota da Prova 1: ");
      fflush (stdin);
      scanf ("%f" , &n1);
      printf ("\n Digite a nota da Prova 2: ");
      fflush (stdin);
      scanf ("%f" , &n2);
      printf("\n Digite a nota do Trabalho:");
      scanf ("%f" , &t);
      resp = ( n1 + n2 + t )/3;
      printf  ("\n Média aritmética = %f",  resp);
      
}



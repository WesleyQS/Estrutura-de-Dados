// Receber um nome do teclado e imprimir as letras na posição par.

#include<string.h>
#include<stdio.h>
#include<cstdlib>

main()
{

 int i=1,tam,x;
 char nome[50];

 printf ("Digite um nome! \n");
 gets(nome);

 tam=strlen(nome);
 printf("\nAs letras na posicao par sao: ",x);

 while(i<=tam-1)
 {
 printf(" %c ",nome[i]);
 i=i+2;
 }

 printf ("\n");
 printf("\n\tNome que voce digitou: %s\t",nome);
 printf ("\n\n");
 system("pause");
 return 0;
}
// Receber um nome do teclado e imprimir as letras na posição ímpar.

#include<string.h>
#include<stdio.h>
#include<cstdlib>

main()
{

 int i=0,tam,x;
 char nome[50];

 printf ("Digite um nome! \n");
 gets(nome);

 tam=strlen(nome);
 printf("\nAs letras na posicao impar sao: ",x);

 while(i<=tam-1)
 {
 printf(" %c ",nome[i]);
 i=i+2;
 }

 printf ("\n");
 printf("\n\tNome voce digitou: %s\t",nome);
 printf ("\n\n");
 system("pause");
 return 0;
}
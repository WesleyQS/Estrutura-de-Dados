// Receber do teclado um nome e imprimir tantas vezes quantos forem seus caracteres.

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

main()
{

 int x,i;
 char nome[20];

 printf("Digite um nome! \n");
 gets(nome);
 i=strlen(nome);

 for(x=1;x<=i;x++)
 printf("\n%s",nome);
 printf("\n\n");
 system("pause");
 return 0;
}
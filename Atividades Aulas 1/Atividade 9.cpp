// Digite um nome do teclado, calcule e mostre quantas letras tem.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main()
{
 int x,i;
 char nome[20];

 for(x=1;x<=4;x++)
 {
 printf("Digite um nome! \n");
 gets(nome);
 i=strlen(nome);
 printf("\nEsse nome tem %d letras.\n\n",i);
 }

 printf("\n\n");
 system("pause");
 return 0;
}
// Receber um nome do teclado e imprimir as 4 primeiras letras do nome.

#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<stdio.h>
main()
{
    char nome[20];
    int x;

    printf("Digite um nome! \n");
    gets(nome);

    for(x=0;x<=3;x++)
    printf("%c",nome[x]);
    printf("\n");
    system("pause");
    return (0);
}
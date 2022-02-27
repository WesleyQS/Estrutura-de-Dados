/* Ler um número do teclado e imprimir todos os números de 1 até o número lido. Depois,
imprimir o produto dos números. */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

main()
{
int x, num=0, p=1;
printf("\n\t INFORME UM NUMERO : ");
scanf("%d",&num);

for(x=1;x<=num;x++)
{
printf("\n Numeros gerados: %d ",x);
p=p*x;
 }

printf("\n\n O produto dos numeros gerados eh: %d",p);
printf("\n\n");
system("pause");
return(0);
}
// Leia um vetor de 10 valores inteiros e exiba todos os valores ímpares.

#include<stdio.h>
#include<stdlib.h>

main()
{
int i,vet[10],vetimpar[10];
  for(i=0;i<10;i++)
          {
          printf("\nDigite um numero!\n");
          scanf("%d",&vet[i]);
     if(vet[i]%2==0)
        printf("O numero digitado eh par\n");
         else{
             vetimpar[i]=vet[i];
             printf("O numero digitado eh impar\n");
             }
        }
}
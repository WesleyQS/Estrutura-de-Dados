/*  Faça um programa que receba do usuário dez temperaturas em graus Fahrenheit,
transforme-as em graus Celsius e armazene os resultados em um vetor. Terminada a entrada
de dados, os valores armazenados devem ser exibidos. Obs.: A fórmula é C = 5/9 (F – 32). */

#include<stdio.h>  

main() 
{
float temp[10];
int i;

printf("\n\t Digite os valores da temperatura em graus Fahrenheit : \n");

for(i=0;i<10;i++)
  {
    scanf("%f",&temp[i]);
  }

 for(i=0;i<10;i++)
   {
    printf("\n\t %d Temperatura em graus Celsius: %f\n",i,(0.55555*(temp[i]-32)));
    printf("\n\n");
    return (0); 
    }
}
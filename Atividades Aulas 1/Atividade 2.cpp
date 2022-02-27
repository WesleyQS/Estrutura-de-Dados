/*Faça um programa que pegue um nome até 20 caracteres 
do teclado e depois escreva-o na tela de trás pra frente.*/

#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

main()
{
	int tam=1000;
	char nome[tam];
	int x,t, i=0;
	cout << "\n digite um nome: " <<endl;
	cin.getline(nome,tam);
	//cin >>nome;
	cout << "primeira forma: ";
	while(nome[i] != '\0')  
	{
		i++;
	}
	for (x=i-1; x>=0; x--)
	cout << nome[x];
	
	cout<<endl;
	system("pause");
	return(0);
	
}

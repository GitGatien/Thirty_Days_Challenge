#include<stdio.h>
//-----------------------------------------------------------------------------------------------
//Fonction qui affiche les n premier termes de la suite de fibonacci

void Fibonacci(int n)
{
	int i,Fpp,Fp = 1, Fs = 1;
	for(i = 0; i < n; i++)
	{
		if(i == 0 || i == 1)
			printf("F_%d = %d\n",i,Fs);
		else
		{
			Fpp = Fp;	//Fpp conserve le terme i-2 de la suite 
			Fp = Fs;	//Fp conserve le terme i-1 de la suite
			Fs += Fpp;	//Fs conserve le terme i de la suite à calculer
			printf("F_%d = %d\n",i,Fs);
		}
	}
}
//-----------------------------------------------------------------------------------------------

int main()
{
	int n;
	do
	{
		printf("Donner n pour afficher les n premiers termes de fibonacci : ");
		scanf("%d",&n);
		if(n < 0)
			printf("Erreur ::::: n est un entier naturel.");
	}while(n < 0);

	Fibonacci(n);

	return 0;
}
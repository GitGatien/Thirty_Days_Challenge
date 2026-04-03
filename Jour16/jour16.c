#include<stdio.h>

int main()
{
	int Tab[100];
	int i,n;
	do
	{
		printf("Donner le nombre d'entier a saisir : ");
		scanf("%d",&n);
		if(n<0 || n>100)
			printf("Saisie invalide n compris entre 0 et 100\n");
	}while(n<0 || n>100);
	
	for(i = 0; i < n; i++)
	{
		printf("Donner l'element %d : ",i+1);
		scanf("%d",Tab+i);
	}

	printf("VOICI VOS DONNEES SAISIES\n\n");
	for(i = 0; i < n; i++)
	{
		printf("[%d]",Tab[i]);
		
	}
	return 0;
}
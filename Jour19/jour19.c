#include<stdio.h>

int main()
{
	int Tab[100];
	int i,j,n,temp;
	printf("Donner plusieur entier dans un desordre pour obtenir un trie dans un ordre croissant :\n");
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

	for(i = 0; i < n-1; i++)
	{
		for(j = i+1; j < n; j++)
		{
			if(Tab[i] > Tab[j])
			{
				temp   = Tab[i];
				Tab[i] = Tab[j];
				Tab[j] = temp;
			}
		}
		
	}
		

	printf("\nVOICI VOS DONNEES TRIEES\n\n");
	for(i = 0; i < n; i++)
	{
		printf("[%d]",Tab[i]);
		
	}
	return 0;
}
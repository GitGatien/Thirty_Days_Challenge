#include<stdio.h>
#include<string.h>

int main()
{
	int Annee;
	printf(" ============= Ce programme affirme si une annee donner est bisextile ou pas =============\n");
	do
	{
		printf("Donner une annee : ");s
		scanf("%d",&Annee);
		if((Annee != (int)Annee))
			printf("Erreur donner un entier.");
	}while(Annee != (int)Annee);
	
	if (Annee % 100 == 0)
			if (Annee % 400 == 0)
				printf("L'annee %d est une annee bisextile.\n",Annee);
	else if(Annee % 4 == 0)
		printf("L'annee %d est une annee bisextile.\n",Annee);
	else
		printf("L'annee %d n'est pas une annee bisextile.\n",Annee);
	return 0;
}
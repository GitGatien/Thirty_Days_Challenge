#include<stdio.h>

int main()
{
	float nbr1,nbr2,temp;
	printf(" =================== Ce pregramme permute les valeurs de deux variables.  ===================\n");

	printf("Donner la premiere valeur : ");
	scanf("%f",&nbr1);
	//Attention aucun control sur la valeur saisie.

	printf("Donner la deuxieme valeur : ");
	scanf("%f",&nbr2);
	//Attention aucun control sur la valeur saisie

//-------------------------------------------------------------------------------------------------------
	printf(" ********** PERMUTATION AVEC VARIABLE TEMPORAIRE ********** \n");
	printf("\n Avant permutation : Nombre1 = %.2f  | Nombre2 = %.2f \n",nbr1,nbr2);
	temp = nbr1;
	nbr1 = nbr2;
	nbr2 = temp;
	printf("\n Apres permutation : Nombre1 = %.2f  | Nombre2 = %.2f \n",nbr1,nbr2);

//-------------------------------------------------------------------------------------------------------
	printf(" ********** PERMUTATION AVEC VARIABLE TEMPORAIRE ********** \n");
	printf("\n Avant permutation : Nombre1 = %.2f  | Nombre2 = %.2f \n",nbr1,nbr2);
	nbr1 += nbr2;
	nbr2 = nbr1 - nbr2;
	nbr1 = nbr1 - nbr2;
	printf("\n Apres permutation : Nombre1 = %.2f  | Nombre2 = %.2f \n",nbr1,nbr2);
//-------------------------------------------------------------------------------------------------------
	
	return 0;
}
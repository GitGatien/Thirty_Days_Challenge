#include<stdio.h>

int main()
{
	float longueur,largeur;
	printf(" ============ Ce programme vous permet de calculer l'air et le perimetre d'un rectangle ============\n");
	printf("Donner la longeur de votre rectangle : ");
	scanf("%f",&longueur);
	//Attention aucun controle de la variable saisie

	printf("Donner la largeur de votre rectangle : ");
	scanf("%f",&largeur);
	//Attention aucun controle de la variable saisie	

	printf("Le perimetre vaut : %.1f et l'air vaut : %.1f",(longueur + largeur)*2,longueur*largeur);
	return 0;
}
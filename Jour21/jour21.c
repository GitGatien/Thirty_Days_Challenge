#include<stdio.h>
#include<string.h>

int main()
{
	int lon = 0;
	char texte;
	printf("Donner une chaine pour trouver sa longueur.\n");
	printf("Tapez votre chaine : ");
	while((texte = getchar()) != '\n')
	{
		lon += 1;
	}
	printf("La longueur de votre chaine est de : %d",lon);

	return 0;
}
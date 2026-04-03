#include<stdio.h>

int main()
{
	int i, n, som =0;
	printf("Ce programme affiche la somme des n premiers entiers naturels.\n");
	do
	{
		printf("Donner n : ");
		scanf("%d",&n);
		if(n < 0|| n != (int)n)
			printf("Erreur n est un entier naturel.\n");
	}while(n < 0 || n != (int)n);

	for(i = 1; i <= n; i++)
		som += i;

	printf("La somme des %d premier(s) termes vaut : %d\n",n,som);
	return	0;
}
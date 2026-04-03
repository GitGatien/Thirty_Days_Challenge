#include<stdio.h>

int main()
{
	int i,n,fact=1;
	printf("Ce programme calcule la factorielle d'un nombre.\n");
	do
	{
		printf("Donner un entier :");
		scanf("%d",&n);
		if(n != (int)n || n<0)
			printf("Saisie incorrect ::::: tapez un entier positif");
	}while(n != (int)n || n<0);
	for(i = 1; i<= n; i++)
	{
		if(n == 0)
		{
			printf("La factorielle de 0 vaut : 1 on note mathematiquement 0! = 1");
			break;
		}

		else
		{
			fact *= i;
			if( i == n)
				printf("La factorielle de %d vaut : %d on note mathematiquement %d! = %d",n,fact,n,fact);
		}

	}
	return 0;
}

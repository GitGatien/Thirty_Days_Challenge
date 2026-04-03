#include<stdio.h>

int main()
{
	int n;
	do
	{
		printf("Donner un entier pour trouver sa paritee : ");
		scanf("%d",&n);
		if(n != (int)n)
			printf("Erreur de saisie ::::: ressayer");
	}while(n != (int)n);
	
	if(n % 2 == 0)
		printf("%d est un nombre pair.",n);
	else
		printf("%d est un nombre impair.",n);
	
	return 0;
}
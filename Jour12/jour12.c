#include<stdio.h>

int main()
{
	int n,i;
	printf(" =================== Ce programme affiche la table de multiplication d'un nombre de 1 a 10 ===================\n");
	do
	{
		printf("Donner un nombre entier : ");
		scanf("%d",&n);
		if(n != (int)n)
			printf("Erreur :::: ressayer.\n");
	}while(n != (int)n);
	printf("TABLE DE MULTIPLICATION PAR : %d\n",n);
	for(i = 1; i <= 10; i++)
		printf("%d * %d = %d\n",n,i,n*i);
	return 0;
}
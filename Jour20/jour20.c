#include<stdio.h>

int main()
{
	int col,line,i,j,elt,Somligne = 0, Somcol = 0;
	int Matrice[100][100];
	do
	{
		printf("Donner le nombre de lignes de la matrice :");
		scanf("%d",&line);
		if(line < 0 || line > 100)
			printf("invalide :::: Tapez un nombre entre 1 et 100");
	}while(line < 0 || line > 100);
	
	do
	{
		printf("Donner le nombre de colonnes de la matrice :");
		scanf("%d",&col);
		if(col < 0 || col > 100)
			printf("invalide :::: Tapez un nombre entre 1 et 100");
	}while(col < 0 || col > 100);

	for(i = 0; i < line; i++)
	{
		for(j = 0; j < col; j++)
		{
			printf("Donner l'element %d,%d : ",i+1,j+1);
			scanf("%d",&elt);
			Matrice[i][j] = elt;
		}
	}

	printf("VOICI LA MATRICE FOURNIE\n");
	for(i = 0; i < line; i++)
	{
		printf("[ ");
		for(j = 0; j < col; j++)
		{
			printf(" ");
			printf("%d ",Matrice[i][j]);			
		}
		printf("]\n");
	}

	for(i = 0; i < line; i++)
	{
		for(j = 0; j < col; j++)
		{
			Somligne += Matrice[i][j];		
		}
	}

	for(i = 0; i < col; i++)
	{
		for(j = 0; j < line; j++)
		{
			Somcol += Matrice[j][i];		
		}
	}
	printf("SOMME DES LIGNES   : %d\n",Somligne);
	printf("SOMME DES COLONNES : %d\n",Somcol);

	return 0;
}
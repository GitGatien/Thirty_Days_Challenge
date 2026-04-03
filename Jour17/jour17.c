#include<stdio.h>

int main()
      {
	int Tab[100];
	int i, n, min, max;
	printf("\nSAISIE DES DONNEES.\n");
	do
	{
	       printf("Combien d'entier voulez-vous saisir ? : ");
	       scanf("%d",&n);
	       if(n < 0 || n > 100)
	             printf("Erreur votre choix doit etre entre 1 et 100 Merci.\n");
	}while(n < 0 || n > 100);
	for(i = 0; i < n; i++)
	{
	        printf("Donner l'element %d : ",i+1);
	        scanf("%d",Tab+i);
	}
	min = Tab[0];
	max = Tab[0];
	for(i = 0; i < n; i++)
	{
	        if(min > Tab[i])
	            min = Tab[i];
	        if(max < Tab[i])
	            max = Tab[i];
	}
	printf("Le minimum de vos donnees vaut : %d et le maximum vaut : %d\n",min,max);
	return 0;
       }
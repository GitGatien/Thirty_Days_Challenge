#include<stdio.h>

int main()
{
	float a,b;
	printf(" ========== Ce programme vous permet d'effectuer la somme de deux nombres. ==========\n");
	
	printf("Donner le premier nombre : ");
	scanf("%f",&a);
	// Attention aucun control n'est effectuer

	printf("Donner le second nombre : ");
	scanf("%f",&b);
	// Attention aucun control n'est effectuer

	printf("La somme de %.2f et de %.2f vaut : %.2f \n",a,b,a+b);
	return 0;
}
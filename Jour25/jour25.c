#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
//----------------------------------------------------------------------------------------------------------------------

int addition(int a, int b)
{
	int retenue;
	while(b != 0)
	{
		retenue = a & b;
		a 		= a ^ b;
		b = retenue << 1;
	}
	return a;
}

//----------------------------------------------------------------------------------------------------------------------

int soustraction(int a, int b)
{
	b = addition(~b,1);
	return addition(a,b);
}

//----------------------------------------------------------------------------------------------------------------------

int multiplication(int a, int b)
{
	bool Is_Negative = (a < 0)^(b < 0);
	a = abs(a);
	b = abs(b);
	int resultat = 0;
	while(b != 0)
	{
		if(b & 1)
			resultat = addition(resultat,a);
		a = a << 1;
		b = b >> 1;
	}
	if(Is_Negative)
		return addition(~resultat,1);
	else
		return resultat;
}
//----------------------------------------------------------------------------------------------------------------------

void division(int a,int b)
{
	bool Is_Negative = (a < 0)^(b < 0);
	int quotient = 0, i,reste;
	int dividende = abs(a);
	int diviseur = abs(b);
	for(i = 31; i >= 0; i--)
	{
		if((dividende >> i) >= diviseur)
		{
			quotient  = addition(quotient,(1<<i));
			dividende = soustraction(dividende,(diviseur << i));	
		}
			
	}
	quotient = Is_Negative?addition(~quotient,1):(int)quotient;
	reste	= (a < 0)? addition(~dividende,1): dividende;
	printf("La division de %d par %d vaut : %d avec un reste de %d",a,b,quotient,reste);
}

int main()
{
	int a,b;
	int Choix;
	printf(" *************** MENU ***************\n");
	printf(" 1. Addition bit a bit\n");
	printf(" 2. Soustration bit a bit\n");
	printf(" 3. Multiplication bit a bit\n");
	printf(" 4. Division bit a bit\n");
	printf(" Tapez votre choix : ");
	scanf("%d",&Choix);
	switch(Choix)
	{
	case 1:
		printf("Donner le premier entier : ");
		scanf("%d",&a);
		printf("Donner le deuxieme entier : ");
		scanf("%d",&b);
		printf("La somme bit a bit de %d et %d vaut : %d ",a,b,addition(a,b));
		break;
	case 2:
		printf("Donner le premier entier : ");
		scanf("%d",&a);
		printf("Donner le deuxieme entier : ");
		scanf("%d",&b);
		printf("La Soustration bit a bit de %d et %d vaut : %d ",a,b,soustraction(a,b));
		break;
	case 3:
		printf("Donner le premier entier : ");
		scanf("%d",&a);
		printf("Donner le deuxieme entier : ");
		scanf("%d",&b);
		printf("La multiplication bit a bit de %d et %d vaut : %d ",a,b,multiplication(a,b));
		break;
	case 4:
		printf("Donner le premier entier : ");
		scanf("%d",&a);
		do
		{
			printf("Donner le deuxieme entier : ");
			scanf("%d",&b);
			if(b == 0)
				printf("Erreur :::: impossible de diviser par 0.");	
		}while(b == 0);
		division(a,b);
		break;
	}

	return 0;
}
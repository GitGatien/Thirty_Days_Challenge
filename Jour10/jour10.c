#include<stdio.h>
#include<conio.h>

int main()
{
	int age;
	char sexe;
	printf(" ========== AFFICHAGE D'INFORMATION =======\n");
	printf("Donner votre age : ");
	scanf("%d",&age);
	//Attention zero control sur age
	

	printf("Donner votre sexe F/M : ");
	while(getchar() != '\n');
	sexe = getchar() ;
	//Attention zero control sur sexe

	if((age >= 8 && age <= 14) && sexe == 'M')
	{
		printf("Vous etes un adolescent de %d an(s).",age);
		 if((age >= 8 && age <= 14) && sexe == 'F')
			printf("Vous etes une adolescente de %d an(s).",age);
	}
	else
		printf("Vous n'etes pas d'une tranche d'adolescents .... merci.");
}
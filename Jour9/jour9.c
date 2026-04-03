#include<stdio.h>
char* Mention(float moy)
{
	if(moy >= 0 && moy < 10)
		return "Insuffisant";
	if(moy >= 10 && moy < 12)
		return "Passable";
	if(moy >= 12 && moy < 14)
		return "Assez-bien";
	if(moy >= 14 && moy <16)
		return "Bien";
	if(moy>16)
		return "Tres-Bien";
}

int main()
{
	float note,som,moy;
	int i;
	for(i = 1; i<= 3; i++)
	{
		do
		{
			printf("Donner la note %d : ",i);
			scanf("%f",&note);
			if(note < 0 || note > 20)
				printf("La note est positive et sur 20.\n");
		}while(note < 0 || note > 20);
		som += note;
	}
	moy = som/3;
	printf("La moyenne des trois notes vaut : %.2f  Mention : %s",moy,Mention(moy));
}
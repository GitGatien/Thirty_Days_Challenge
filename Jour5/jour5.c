#include<stdio.h>

int main()
{
	int HH,MM,SS,temps;
	do
	{
		printf("Donner le temps en seconde pour le convertir au format (HH : MM : SS) :  ");
		scanf("%d",&temps);
		if(temps<0)
			printf("\nLe temps est toujous positif :)!\n\n");
		MM = (int)(temps / 60);
		SS = temps % 60;
		HH = (int)MM/60;
		MM = MM%60;
	}while(temps < 0 );
	printf("\n\n%d seconde(s) correspond(ent) a  %d h: %d min: %d sec ... Merci et a tres vite!\n\n",temps,HH,MM,SS);
	return 0;
}
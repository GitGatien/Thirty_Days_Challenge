#include<stdio.h>
#include<stdbool.h>

int main()
{
	float nbre, max;
	int k=0;
	bool egaliter;
	printf(" ============== Ce programme trouve le plus grand nombre parmis trois nombres donnees. ==============\n");
	do
	{
		printf("Donner un nombre : ");
		scanf("%f",&nbre);
		if( k == 0 )
			max = nbre;
		if (k > 0)
			if (max != nbre)
				egaliter = false;

		if(nbre > max)
			max = nbre;
		k += 1;
	}while(k < 3);

	if (egaliter)
		printf("Les trois nombres fournis sont egaux et valent : %f.",max);
	else
		printf("Les trois nombres fournis differts et le plus grand est : %f.",max);

	return 0;
}
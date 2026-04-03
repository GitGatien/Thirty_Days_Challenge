#include<stdio.h>

int main()
{
	int n,i;
	do
	{
		printf("Donner un entier superieur ou egal a 1 : ");
		scanf("%d",&n);
		if (n<1)
			printf("Votre saisie est incorrect !\n");
	}while(n<1);
	for(i = 1; i<= n; i++)
		printf("%d\n",i);
	
	return 0;
}
#include<stdio.h>
#include<string.h>

int main()
{
	int i,k=0;
	char texte[50];
	printf("Ce programme test des palindromes.\n\n");
	do
	{
		printf("Donner un mot ou nombre de moins de 50 characteres : ");
		scanf("%s",&texte);
	}while(strlen(texte) > 49);

	for(i = 0; i < (int)(strlen(texte)/2); i++)
	{
		if(texte[i] == texte[strlen(texte)-(i+1)])
			k += 1;
	}
	
	if(k == (int)(strlen(texte)/2))
		printf("%s est un palindrome.",texte);
	else
		printf("%s n'est pas un palindrome.",texte);
	
	return 0;
}
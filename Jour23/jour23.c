#include<stdio.h>
#include<string.h>
#include<ctype.h>//Contient la fonction isalpha()

#include <stdio.h>
#include <ctype.h>// Contient les fonctions isalpha()/islower()/isupper()

// Fonction pour chiffrer un texte avec une clé donnée
void chiffrerCesar(char* texte, int cle) 
{
	int i;
    for (i = 0; texte[i] != '\0'; i++)
     {
        char c = texte[i];
        if(isalpha(c))
        {
        	// Traitement des majuscules
	        if (isupper(c))
	        {
	            texte[i] = ((c - 'A' + cle) % 26 + 26) % 26 + 'A';
	        }
	        // Traitement des minuscules
	        else if (islower(c)) 
	        {
	            texte[i] = ((c - 'a' + cle) % 26 + 26) % 26 + 'a';
        	}	
        }
        else
        	texte[i] = c;
        
    }
}

int main() {
    char message[100];
    int cle;

    printf("Entrez le message a chiffrer : ");
    fgets(message, sizeof(message), stdin);

    printf("Entrez la cle de decalage : ");
    scanf("%d", &cle);

    chiffrerCesar(message, cle);

    printf("Message transformer : %s\n", message);

    return 0;
}

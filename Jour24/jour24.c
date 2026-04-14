#include <stdio.h>
#include <stdlib.h>

// Addition bit à bit (sans +)
int addition(int a, int b)
 {
    while (b != 0) 
    {
        int retenue = a & b;
        a = a ^ b;          // ^ est autorisé ici car c'est pour l'addition, pas pour la puissance
        b = retenue << 1;
    }
    return a;
}

// Multiplication bit à bit (sans *)
int multiplication(int a, int b)
 {
    int resultat = 0;
    while (b != 0) 
    {
        if (b & 1)
         {
            resultat = addition(resultat, a);
        }
        a = a << 1;
        b = b >> 1;
    }
    return resultat;
}

int main() 
{
    int base, exposant;
    int puissance = 1;
    int ctrl = 0;
    int base_original;
    
    printf("Calcul puissance sans utilisation des symboles de bases.\n");

    while(1)
    {
        printf("Donner la base de la puissance : ");
        if (scanf("%d", &base) == 1) 
        {
            break;
        } 
        else 
        {
            printf("Erreur inattendue !\n");
            while(getchar() != '\n'); // vider le buffer
            continue;
        }
    }

    while (1) 
    {
        printf("Donner l'exposant de la puissance : ");
        if (scanf("%d", &exposant) == 1)
         {
            if (exposant < 0)
             {
                printf("l'exposant ne doit pas etre negatif\n");
                continue;
            }
            break;
        } 
        else 
        {
            printf("Erreur inattendue !\n");
            while(getchar() != '\n');
        }
    }

   base_original = base;  

    for (int i = 0; i < exposant; i++) {
        if (base < 0) {
            base = abs(base);
            ctrl = addition(ctrl, 1);
        }
        puissance = multiplication(puissance, base);
    }

    if (ctrl != 0) 
    {
        // base était négative
        if (exposant % 2 == 1) {  // exposant impair → résultat négatif
            printf("%d puissance %d vaut : -%d\n", base_original, exposant, puissance);
        }
         else 
        {
            printf("%d puissance %d vaut : %d\n", base_original, exposant, puissance);
        }
    } 
    else 
    {
        printf("%d puissance %d vaut : %d\n", base_original, exposant, puissance);
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int Tab[100];
    int taille, i, element, count = 0, pos[100], posCount = 0;
    int max, min, maxIndex, minIndex, sum, choix;

    printf("\t\t\t\t\t\t************ Menu ************\n");
    printf("1. Afficher les entiers positifs et negatifs\n");
    printf("2. Rechercher un element dans le tableau\n");
    printf("3. Trouver le max et le min et leurs indices\n");
    printf("4. Calculer la somme des elements du tableau\n");
    printf("5. Inverser le tableau\n");
    printf("6. Quitter\n");

    do
    {
        printf("Choisissez une option: ");
        scanf("%d", &choix);

        if (choix < 1 || choix > 6)
        {
            printf("Option invalide.\n");
        }
    } while (choix < 1 || choix > 6);

    printf("Entrez la taille du tableau [1-100]: ");
    scanf("%d", &taille);
    while (taille < 1 || taille > 100)
    {
        printf("La taille du tableau doit être comprise entre 1 et 100. Reessayez: ");
        scanf("%d", &taille);
    }
    for (i = 0; i < taille; i++)
    {
        printf("\aEntrez l'entier [%d]: ", i + 1);
        scanf("%d", &Tab[i]);
    }
    switch (choix)
    {
    case 1:
        // Afficher les entiers positifs et negatifs
        printf("-------------------------------\n");
        printf("Entiers positifs: ");
        for (i = 0; i < taille; i++)
        {
            if (Tab[i] >= 0)
            {
                printf("%d ", Tab[i]);
            }
        }

        printf("\nEntiers negatifs: ");
        for (i = 0; i < taille; i++)
        {
            if (Tab[i] < 0)
            {
                printf("%d ", Tab[i]);
            }
        }
        printf("\n");
        break;
    case 2:
        // Rechercher un element dans le tableau
        printf("\n-------------------------------");
        printf("\nEntrez l'element a rechercher: ");
        scanf("%d", &element);

        for (i = 0; i < taille; i++)
        {
            if (Tab[i] == element)
            {
                pos[posCount] = i + 1;
                posCount++;
                count++;
            }
        }

        if (count > 0)
        {
            printf("%d existe dans le tableau.\n", element);
            printf("Il apparait %d fois.\n", count);
            printf("Positions: ");
            for (i = 0; i < posCount; i++)
            {
                printf("%d ", pos[i]);
            }
            printf("\n");
        }
        else
        {
            printf("%d n'existe pas dans le tableau.\n", element);
        }
        break;
    case 3:
        // Trouver le maximum et son indice
        max = Tab[0];
        maxIndex = 0;
        for (i = 1; i < taille; i++)
        {
            if (Tab[i] > max)
            {
                max = Tab[i];
                maxIndex = i;
            }
        }
        // Trouver le minimum et son indice
        min = Tab[0];
        minIndex = 0;
        for (i = 1; i < taille; i++)
        {
            if (Tab[i] < min)
            {
                min = Tab[i];
                minIndex = i;
            }
        }
        printf("-------------------------------\n");
        printf("Le minimum est: %d\n", min);
        printf("Son indice est: %d\n", minIndex + 1);
        printf("-------------------------------\n");
        printf("Le maximum est: %d\n", max);
        printf("Son indice est: %d\n", maxIndex + 1);
        break;
    case 4:
        // Calculer la somme des elements du tableau
        sum = 0;
        for (i = 0; i < taille; i++)
        {
            sum += Tab[i];
        }
        printf("-------------------------------\n");
        printf("La somme des elements du tableau est: %d\n", sum);
        break;

    case 5:
        // Inverser le tableau
        printf("-------------------------------\n");
        printf("Tableau avant inversion: ");
        for (i = 0; i < taille; i++)
        {
            printf("%d ", Tab[i]);
        }
        printf("\n");

        int varTemp;
        for (i = 0; i < taille / 2; i++)
        {
            varTemp = Tab[i];
            Tab[i] = Tab[taille - i - 1];
            Tab[taille - i - 1] = varTemp;
        }

        printf("Tableau apres inversion: ");
        for (i = 0; i < taille; i++)
        {
            printf("%d ", Tab[i]);
        }
        printf("\n");
        break;
    case 6:
        // Quitter
        printf("Au revoir!\n");

        break;
        return 0;
    }

    return 0;
}
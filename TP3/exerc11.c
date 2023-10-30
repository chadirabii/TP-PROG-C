#include <stdio.h>

int main()
{
    float moy;
    printf("Donner la moyenne de l'etudiant: ");
    scanf("%f", &moy);

    while (moy < 0 || moy > 20)
    {
        printf("Moyenne invalide\n");
        printf("--------------------------\n");
        printf("Donner la moyenne de l'etudiant: ");
        scanf("%f", &moy);
    }
    if (moy >= 10 && moy < 12)
        printf("Eleve admis avec mention Passable");
    else if (moy >= 12 && moy < 14)
        printf("Eleve admis avec mention Assez Bien");
    else if (moy >= 14 && moy < 16)
        printf("Eleve admis avec mention Bien");
    else if (moy >= 16)
        printf("Eleve admis avec mention Tres Bien");
    else
        printf("Eleve redouble");

    return 0;
}

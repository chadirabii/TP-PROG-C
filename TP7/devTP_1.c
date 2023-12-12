#include <stdio.h>

int iHeures, iMinutes, iSecondes;

void Saisir_heures(int *iH, int *iM, int *iS)
{
    do
    {
        printf("Saisir l'heure : ");
        scanf("%d", iH);
        if (*iH < 00 || *iH > 23)
        {
            printf("Erreur : L'heure doit etre comprise entre 0 et 23.\n");
        }
    } while (*iH < 00 || *iH > 23);

    do
    {
        printf("Saisir les minutes : ");
        scanf("%d", iM);
        if (*iM < 00 || *iM > 59)
        {
            printf("Erreur : Les minutes doivent etre comprises entre 0 et 59.\n");
        }
    } while (*iM < 00 || *iM > 59);

    do
    {
        printf("Saisir les secondes : ");
        scanf("%d", iS);
        if (*iS < 00 || *iS > 59)
        {
            printf("Erreur : Les secondes doivent etre comprises entre 0 et 59.\n");
        }
    } while (*iS < 00 || *iS > 59);
}

void affiche_heures(int heures, int minutes, int secondes)
{
    printf("Il est %d heure", heures);
    if (heures > 1)
    {
        printf("s");
    }
    printf(", %d minute", minutes);
    if (minutes > 1)
    {
        printf("s");
    }
    printf(" et %d seconde", secondes);
    if (secondes > 1)
    {
        printf("s");
    }
    printf(".\n");
}

void tick()
{
    iSecondes++;
    if (iSecondes == 60)
    {
        iSecondes = 00;
        iMinutes++;
        if (iMinutes == 60)
        {
            iMinutes = 00;
            iHeures++;
            if (iHeures == 24)
            {
                iHeures = 00;
            }
        }
    }
}

int main()
{
    Saisir_heures(&iHeures, &iMinutes, &iSecondes);
    affiche_heures(iHeures, iMinutes, iSecondes);
    tick();
    affiche_heures(iHeures, iMinutes, iSecondes);
    return 0;
}

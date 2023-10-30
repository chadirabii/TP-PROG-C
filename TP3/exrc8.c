#include <stdio.h>

int main()
{
    int jj, mm, aa;
    char *MM;
    printf("Entrez une date (jj/mm/aaaa) : ");
    scanf("%d/%d/%d", &jj, &mm, &aa);

    if (mm == 2)
    {
        if ((aa % 4 == 0 && aa % 100 != 0) || (aa % 400 == 0))
        {
            if (jj < 1 || jj > 29)
            {
                printf("Date invalide pour Fevrier en annee bissextile.\n");
                return 0;
            }
        }
        else
        {
            if (jj < 1 || jj > 28)
            {
                printf("Date invalide pour Fevrier en annee non bissextile.\n");
                return 0;
            }
        }
    }
    else if (mm == 4 || mm == 6 || mm == 9 || mm == 11)
    {
        if (jj < 1 || jj > 30)
        {
            printf("Date invalide pour ce mois.\n");
            return 0;
        }
    }
    else if (jj < 1 || jj > 31 || mm < 1 || mm > 12 || aa <= 0)
    {
        printf("Date invalide.\n");
        return 0;
    }

    switch (mm)
    {
    case 1:
        MM = "Janvier";
        break;
    case 2:
        MM = "Fevrier";
        break;
    case 3:
        MM = "Mars";
        break;
    case 4:
        MM = "Avril";
        break;
    case 5:
        MM = "Mai";
        break;
    case 6:
        MM = "Juin";
        break;
    case 7:
        MM = "Juillet";
        break;
    case 8:
        MM = "Août";
        break;
    case 9:
        MM = "Septembre";
        break;
    case 10:
        MM = "Octobre";
        break;
    case 11:
        MM = "Novembre";
        break;
    case 12:
        MM = "Decembre";
        break;
    }

    printf("La date est : %d / %s / %d\n", jj, MM, aa);
    return 0;
}
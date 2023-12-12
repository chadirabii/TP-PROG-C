#include <stdio.h>

float calcCout(int totalKm)
{
    float cout = 0.0;

    if (totalKm <= 100)
    {
        cout = totalKm * 0.120;
    }
    else if (totalKm <= 1000)
    {
        cout = 100 * 0.120 + (totalKm - 100) * 0.150;
    }
    else
    {
        cout = 100 * 0.120 + 900 * 0.150 + (totalKm - 1000) * 0.170;
    }

    return cout;
}

float calcCoutJour(int numJours)
{
    return numJours * 75.0;
}

int main()
{
    int numJours, totalKm;
    float coutKm, coutJour;

    printf("Entrez le nombre de jours de location: ");
    scanf("%d", &numJours);

    printf("Entrez le nombre total de kilomètres: ");
    scanf("%d", &totalKm);

    coutKm = calcCout(totalKm);
    coutJour = calcCoutJour(numJours);

    printf("Coût pour la location au kilomètre: %.2f DT\n", coutKm);
    printf("Coût pour le forfait journalier: %.2f DT\n", coutJour);

    if (coutKm < coutJour)
    {
        printf("L'option de location au kilomètre est plus avantageuse.\n");
    }
    else if (coutKm > coutJour)
    {
        printf("L'option de forfait journalier est plus avantageuse.\n");
    }
    else
    {
        printf("Les deux options ont le même coût.\n");
    }

    return 0;
}
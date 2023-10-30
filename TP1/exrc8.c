#include <stdio.h>
int main()
{
    double PNET, PBRUT;
    int TVA;
    printf("Entrez le prix brut de l'article : ");
    scanf("%lf", &PBRUT);
    printf("Entrez le pourcentage de TVA : ");
    scanf("%d", &TVA);

    // Calcul du prix net
    PNET = PBRUT / (1 + TVA / 100.0);
    printf("Le prix net de l'article est : %.2lf\n", PNET);

    return 0;
}

#include <stdio.h>
int main(void)
{
    double prixNet, prixBrut;
    int pourcentageTVA;
    printf("Entrez le prix net : ");
    scanf("%lf", &prixNet);
    printf("Entrez le pourcentage de TVA : ");
    scanf("%d", &pourcentageTVA);

    // Calcule le prix brut en utilisant la formule
    prixBrut = prixNet + prixNet * pourcentageTVA / 100;
    printf("Le prix brut de l'article est : %.2lf\n", prixBrut);

    // Calcule le prix net en utilisant la formule déduite
    prixNet = prixBrut / (1 + pourcentageTVA / 100.0);
    printf("Le prix net de l'article est : %.2lf\n", prixNet);

    return 0;
}

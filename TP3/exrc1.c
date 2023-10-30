#include <stdio.h>
int main()
{
    int nbr;
    printf("donner un entier: ");
    scanf("%d", &nbr);
    if (nbr < 0)
        printf("le nombre % d est negatif\n ", nbr);
    else if (nbr > 0)
        printf("le nombre %d est positif\n", nbr);
    else
        printf("le nombre %d est nul\n ", nbr);

    return 0;
}
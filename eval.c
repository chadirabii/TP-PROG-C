#include <stdio.h>

int main()
{
    long long x, carre, aux;
    int nb_chiffres = 0;
    long long mod = 1;

    printf("donner un entier x : ");
    scanf("%lld", &x);

    if (x == 0)
    {
        printf("0 est un nombre automorphe.\n");
        return 0;
    }

    carre = x * x;
    aux = x;

    while (aux != 0)
    {
        nb_chiffres++;
        aux = aux / 10;
        mod = mod * 10;
    }

    long long dernier_chiff = carre % mod;

    if (x == dernier_chiff)
        printf("%lld est un nombre automorphe.\n", x);
    else
        printf("%lld n'est pas un nombre automorphe.\n", x);

    return 0;
}
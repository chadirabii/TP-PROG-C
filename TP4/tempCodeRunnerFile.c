#include <stdio.h>

int main()
{
    int a, b, i, result;
    printf("Entrez deux entiers: ");
    scanf("%d %d", &a, &b);
    result = 0;
    i = b;
    while (i > 0)
    {
        result += a;
        i--;
    }

    printf("Le produit de %d et %d est: %d\n", a, b, result);
    return 0;
}

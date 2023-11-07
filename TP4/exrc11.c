#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n, i;
    bool est_premier = true;

    printf("Entrez un entier positif: ");
    scanf("%d", &n);

    if (n == 0 || n == 1)
    {
        printf("%d n'est pas un nombre premier.\n", n);
        return 0;
    }

    for (i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            est_premier = false;
            break;
        }
    }

    if (est_premier == true)
        printf("%d est un nombre premier.\n", n);
    else
        printf("%d n'est pas un nombre premier.\n", n);

    return 0;
}
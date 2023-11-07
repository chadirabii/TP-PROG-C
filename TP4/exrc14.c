#include <stdio.h>

int main()
{
    int K, U1 = 1, U2 = 2, Un = 0;

    printf("Entrez un entier K: ");
    scanf("%d", &K);

    if (K == 1)
    {
        Un = U1;
    }
    else if (K == 2)
    {
        Un = U2;
    }
    else
    {
        for (int i = 3; i <= K; i++)
        {
            Un = U1 + U2;
            U1 = U2;
            U2 = Un;
        }
    }

    printf("La valeur de U%d est %d\n", K, Un);

    return 0;
}

#include <stdio.h>

int main()
{
    int N;
    printf("Entrez un entier N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        int somme = 0;
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                somme += j;
            }
        }

        if (somme == i)
        {
            printf("%d est un nombre parfait.\n", i);
        }
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int i, n, min, max, sum = 0;
    float moy;

    printf("Entrez le nombre [1]: ");
    scanf("%d", &n);
    min = n;
    max = n;
    sum += n;

    for (i = 1; i < 20; i++)
    {
        printf("Entrez le nombre [%d]: ", i + 1);
        scanf("%d", &n);
        if (n < min)
        {
            min = n;
        }
        if (n > max)
        {
            max = n;
        }
        sum += n;
    }

    moy = (float)sum / 20;

    printf("Le plus petit nombre est: %d\n", min);
    printf("Le plus grand nombre est: %d\n", max);
    printf("La somme des nombres est: %d\n", sum);
    printf("La moyenne des nombres est: %.2f\n", moy);

    return 0;
}

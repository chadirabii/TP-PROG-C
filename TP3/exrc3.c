#include <stdio.h>
int main()
{
    int a, b, c, max, min;
    printf("Entrer 3 nombre : ");
    scanf("%d %d %d", &a, &b, &c);
    // Trouver le nombre maximum
    max = a;
    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }
    // Trouver le nombre minimum
    min = a;
    if (b < min)
    {
        min = b;
    }
    if (c < min)
    {
        min = c;
    }
    printf("Le nombre maximum est %d\n", max);
    printf("Le nombre minimum est %d\n", min);
    return 0;
}

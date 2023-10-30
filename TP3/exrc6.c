#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, delta, x1, x2;
    printf("Donner la valeur de a: ");
    scanf("%f", &a);

    while (a == 0)
    {
        printf("a ne peut pas etre nul!!\n");
        printf("--------------------------\n");
        printf("Donner la valeur de a: ");
        scanf("%f", &a);
    }

    printf("Donner la valeur de b: ");
    scanf("%f", &b);

    printf("Donner la valeur de c: ");
    scanf("%f", &c);

    delta = b * b - 4 * a * c;

    if (a + b + c == 0)
    {
        x1 = -1;
        x2 = -c / a;
    }
    else if (a - b - c == 0)
    {
        x1 = 1;
        x2 = c / a;
    }
    else
    {

        if (delta > 0)
        {
            x1 = (-b - sqrt(delta)) / (2 * a);
            x2 = (-b + sqrt(delta)) / (2 * a);
        }
        else if (delta == 0)
        {
            x1 = -b / (2 * a);
            printf("La solution est : %.2f\n", x1);
        }
        else
        {
            printf("Pas de solution\n");
        }
    }
    printf("Les solutions pour l'equation %.2fx(carre) + %.2fx + %.2f : %.2f et %.2f\n", a, b, c, x1, x2);
}
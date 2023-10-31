#include <stdio.h>

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        int n = i;
        int somme = 0;
        while (n > 0)
        {
            somme += n % 10;
            n = n / 10;
        }
        if (somme == 11)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
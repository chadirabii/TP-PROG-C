#include <stdio.h>
int main()
{
    for (int i = 1; i <= 100; i++)
    {
        int n = i;
        int mod = n % 10;
        int div = n / 10;
        int somme = div + mod;
        if (somme == 11)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
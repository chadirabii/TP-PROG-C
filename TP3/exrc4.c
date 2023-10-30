#include <stdio.h>
int main()
{
    int x;
    printf("Entrez un nombre: ");
    scanf("%d", &x);
    if (x % 2 == 0)
    {
        printf("%d est un nombre pair.\n", x);
    }
    else
    {
        printf("%d est un nombre impair.\n", x);
    }
    return 0;
}

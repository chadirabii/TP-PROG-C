#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char bigramme[3];
    int count = 0;
    char *ptr = str;

    printf("Entrez une chaine de caracteres: ");
    scanf("%s", str);

    printf("Entrez un bigramme: ");
    scanf("%s", bigramme);

    while (*ptr && *(ptr + 1))
    {
        if (*ptr == bigramme[0] && *(ptr + 1) == bigramme[1])
        {
            count++;
        }
        ptr++;
    }

    printf("Le bigramme '%s' apparait %d fois dans la chaine.\n", bigramme, count);

    return 0;
}
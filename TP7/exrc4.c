#include <stdio.h>
#include <stdbool.h>

void Permuter(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void RemplirTab(int *arr, int size)
{
    printf("---------------- Remplissage du tableau ----------------\n");
    for (int i = 0; i < size; i++)
    {
        printf("Entrez la valeur [%d] : ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void AfficherTab(int *arr, int size)
{
    printf("Contenu du tableau : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

bool estTrie(int *arr, int size)
{
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            return false;
        }
    }
    return true;
}

void triTab(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                Permuter(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main()
{
    int size;
    printf("Entrez la taille du tableau : ");
    scanf("%d", &size);

    int arr[size];
    RemplirTab(arr, size);

    printf("Tableau avant le tri :\n");
    AfficherTab(arr, size);

    triTab(arr, size);

    printf("Tableau apres le tri :\n");
    AfficherTab(arr, size);

    if (estTrie(arr, size))
    {
        printf("Le tableau est trie.\n");
    }
    else
    {
        printf("Le tableau n'est pas trie.\n");
    }

    return 0;
}
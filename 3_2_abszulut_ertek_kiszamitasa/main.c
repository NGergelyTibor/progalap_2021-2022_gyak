#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bekertSzam = 0;
    printf("Kerem adjon egy szamot!\n");
    scanf("%d",&bekertSzam);
    if (bekertSzam < 0)
    {
        printf("Abszulut: %d", abs(bekertSzam));
    }
    else
    {
        printf("Abszulut: %d", bekertSzam);
    }
    return 0;
}

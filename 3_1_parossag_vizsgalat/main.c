#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bekertEgeszSzam;
    printf("Parossag vizsgalata\n");
    printf("Kerem adjon meg egy egesz szamot\n");
    scanf("%d", &bekertEgeszSzam);
    printf(bekertEgeszSzam % 2 == 0 ? "(IF ROVID) paros" : "paratlan");
    printf("\n");
    if(bekertEgeszSzam % 2 == 0)
    {
        printf("(IF HOSSZU) a bekert szam paros\n");
    }
    else
    {
        printf("(IF HOSSZU) a bekert szam paratlan\n");
    }
    switch (bekertEgeszSzam % 2)
    {
        case 0:
            printf("(CASE 0) a bekert szam paros\n");
            break;

        case 1:
            printf("(CASE 1) a bekert szam paratlan\n");
            break;
    }
    return 0;
}

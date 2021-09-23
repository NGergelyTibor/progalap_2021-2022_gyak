#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bekertEgeszSzam;
    printf("Parossag vizsgalata\n");
    printf("Kerem adjon meg egy egesz szamot\n");
    scanf("%d", &bekertEgeszSzam);
    printf(bekertEgeszSzam ? "paros" : "paratlan");
    printf("\n");
    return 0;
}

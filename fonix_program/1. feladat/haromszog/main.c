#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int aOldal,bOldal,cOldal;
    double terulet, kerulet, keruletFele;
    printf("Harom ter./ker. kiszamitas");
    printf("Adja meg a haromszog oldalai\n");
    printf("formatum: aOldal bOldal cOldal\n");
    scanf("%d %d %d", &aOldal, &bOldal, &cOldal);
    if ((aOldal + bOldal > cOldal) && (aOldal + cOldal > bOldal) && (bOldal + cOldal > aOldal))
    {
        printf("Nem szerkezheto haromszog\n");
        return 1;
    }
    keruletFele = (aOldal + bOldal + cOldal) / 2.0;
    terulet = keruletFele * (keruletFele - aOldal) * (keruletFele - bOldal) * (keruletFele - cOldal);
    terulet = sqrt(terulet);
    kerulet = keruletFele * 2;
    printf("%lf\n", keruletFele);
    printf("%lf\n", terulet);
    printf("%lf\n", kerulet);
    return 0;
}

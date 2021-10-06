#include <stdio.h>
#include <stdlib.h>
int main()
{
    int bekertSzam, masikSzam, masikMasikSzam;
    int bekertSzamDarabszama;
    int joAdatVolt = 0;
    printf("Kerek egy egesz szamot\n");
    printf("");
    masikMasikSzam = 5;
//     while (masikMasikSzam > 3)
//        {
//            printf("Szamitott ertek %d\n", masikMasikSzam * 3);
//            masikMasikSzam--;
//        }
//    do {
//        printf("Szamitott ertek %d\n", masikMasikSzam * 3);
//        masikMasikSzam--;
//    } while(masikMasikSzam > 3);
   printf("db: %d\n", bekertSzamDarabszama);
   printf("%d - %d = %d\n",bekertSzam,masikSzam,bekertSzam - masikSzam);

   do
   {
   bekertSzamDarabszama = scanf("%d %d %d", &bekertSzam, &masikSzam, &masikMasikSzam);
   if (bekertSzamDarabszama != 3)
   {
        printf("Hibas adatok!\n");
   }
   else
   {
       joAdatVolt = 1;
       printf("jo adat volt");
   }

   }
   while (getchar() != '\n');
   while (!joAdatVolt);


//    if (bekertSzamDarabszama > 0)
//    {
////      if(bekertSzamDarabszama == 1)
////      {
////        printf("csak 1 valtozo %d\n", bekertSzam);
////      }
////      else if (bekertSzamDarabszama == 2)
////        {
////            printf("csak 2 valtozo %d %d\n", bekertSzam, masikSzam);
////        }
////      else if (bekertSzamDarabszama == 3)
////        {
////        printf("csak 3 valtozo %d %d %d\n", bekertSzam, masikSzam, masikMasikSzam);
////        }
//
//      printf("igaz ag\n");
//      printf("bekertunk adatokat\n");
//    }
//    else
//    {
//      printf("hibas ag\n");
//      printf("hibas adatok\n");
//    }
//    switch(bekertSzamDarabszama)
//    {
//        case 1:
//             printf("csak 1 valtozo %d\n", bekertSzam);
//             break;
//        case 2:
//            printf("csak 2 valtozo %d %d\n", bekertSzam, masikSzam);
//            break;
//        case 3:
//            printf("csak 3 valtozo %d %d %d\n", bekertSzam, masikSzam, masikMasikSzam);
//            break;
//        default:
//            printf("Nincs darabszam.");

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, darab;
    int trueOrFalse = 0;


    while(!trueOrFalse)
    {
        while( (getchar())!='\n' && c !=EOF ){
            darab = scanf("%d %d %d", &a,&b,&c);
        }

        if (darab != 3)
        {
            printf("Rossz adat.");
        }
        else
        {
            printf("Jo adat");
            trueOrFalse = 1;
        }



    }
    return 0;
}

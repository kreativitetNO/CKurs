#include <stdio.h>

int main()
{
    int mittTall = 5123;

//    int* pekerTilNoe; Dette er dumt å gjøre
    int* pekerTilNoe = &mittTall;
//    double* pekerTilKommaTall = &mittTall; Også dumt å gjøre...

    printf("%d\n", *pekerTilNoe);
    printf("%p\n", pekerTilNoe);

    char* tekst = "NoeTekst";
    
    printf("%c\n", tekst[2]);

    printf("%c\n", *(tekst + 1));
    printf("%c\n", *(1 + tekst));

    printf("%c\n", 2[tekst]); // imponer en venn

    return 0;
}
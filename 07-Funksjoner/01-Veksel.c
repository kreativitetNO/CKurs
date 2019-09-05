#include <stdio.h>

int globalInt = 5;

int regnUtAntallEnheter(int enhetsStoerrelse, int beloep)
{
    return beloep / enhetsStoerrelse;
}

void oekVerdi(int i)
{
    globalInt++; // Tilgjenglig fordi den fins i en ytter-scope
    {
        int j = 4;
    }
    // j = j + 3; Eksisterer ikke her fordi den er utenfor blokken den er definert i
    i = i + 1;
}

void skrivMeny(void)
{
    printf("1. Gå til hovedmeny\n");
    printf("2. Gjør noe annet\n");
    printf("3. Avslutt program\n");
}

void oekVerdiBedre(int* pi)
{
    *pi = *pi + 1;
}

int main()
{
    /*
    int pris = 10;
    int kundenGir = 200;

    int veksel = kundenGir - pris;

    int antall50lapper = regnUtAntallEnheter(50, veksel);
    veksel = veksel - antall50lapper * 50;
    int antall20kroninger = regnUtAntallEnheter(20, veksel);

    printf("Kunden skal ha igjen %d\n", veksel);
    printf("Kunden skal ha %d 50-lapper\n", antall50lapper);
    printf("Kunden skal ha %d 20-kroninger\n", antall20kroninger);
*/
    int mittTall = 5;
    printf("%d\n", mittTall);
    oekVerdi(mittTall);
    printf("%d\n", mittTall);
    oekVerdiBedre(&mittTall);
    printf("%d\n", mittTall);

    int valg = 0;
    while (valg != 3)
    {
        skrivMeny();
        scanf("%d", &valg);
    }

    return 0;
}

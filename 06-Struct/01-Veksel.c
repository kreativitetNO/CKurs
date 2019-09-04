#include <stdio.h>

struct Skuff {
    int antall;
    int verdi;
    char* navn;
};

int main()
{
    struct Skuff skuff;

    skuff.antall = 5;
    skuff.verdi = 10;
    skuff.navn = "10-ere";

    printf("%s skuffen har %d enheter i seg med verdi %d\n",
        skuff.navn, skuff.antall, skuff.verdi);

    struct Skuff skuffer[2] = {
        { 5, 10, "Femmere" },
        { 9, 1, "Kroner" }
    };

    for (int i = 0; i < 2; i++)
    {
        printf("%s skuffen har %d enheter i seg med verdi %d\n",
        skuffer[i].navn, skuffer[i].antall, skuffer[i].verdi);
    }

    return 0;
}

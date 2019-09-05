#include <stdio.h>

int main()
{
    int pris = 14;
    int kundenGir = 86;

    int veksel = kundenGir - pris;

    printf("Kunden skal ha igjen %d\n", veksel);
    return 0;
}

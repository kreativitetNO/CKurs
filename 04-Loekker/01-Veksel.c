#include <stdio.h>

int main()
{
    int pris = 13;
    int kundenGir = 100;

    int veksel = kundenGir - pris;

    while (veksel >= 50)
    {
        printf("Kunden skal ha igjen en 50-lapp\n");
        veksel = veksel - 50;        
    }
    while (veksel >= 20)
    {
        printf("Kunden skal ha igjen en 20-kroning\n");
        veksel = veksel - 20;        
    }
    while (veksel >= 10)
    {
        printf("Kunden skal ha igjen en 10-kroning\n");
        veksel = veksel - 10;        
    }
    while (veksel >= 5)
    {
        printf("Kunden skal ha igjen en 5-kroning\n");
        veksel = veksel - 5;     
    }
    while (veksel >= 1)
    {
        printf("Kunden skal ha igjen en 1-kroning\n");
    }

    printf("Du skylder fortsatt kunden %d\n", veksel);
    return 0;
}

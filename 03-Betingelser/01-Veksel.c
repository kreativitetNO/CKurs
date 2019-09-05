#include <stdio.h>

int main()
{
    int pris = 13;
    int kundenGir = 100;

    int veksel = kundenGir - pris;

    if (veksel >= 50)
    {
        printf("Kunden skal ha igjen en 50-lapp\n");
        veksel = veksel - 50;        
    }
    if (veksel >= 20)
    {
        printf("Kunden skal ha igjen en 20-kroning\n");
        veksel = veksel - 20;        
    }
    if (veksel >= 10)
    {
        printf("Kunden skal ha igjen en 10-kroning\n");
        veksel = veksel - 10;        
    }
    if (veksel >= 5)
    {
        printf("Kunden skal ha igjen en 5-kroning\n");
        veksel = veksel - 5;     
    }
    if (veksel >= 1)
    {
        printf("Kunden skal ha igjen en 1-kroning\n");
        veksel = veksel - 1;        
    }

    printf("Du skylder fortsatt kunden %d\n", veksel);
    return 0;
}
